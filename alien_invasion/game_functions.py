import sys
import pygame
from bullet import Bullet
from alien import Alien
from time import sleep

def check_keydown_events(event,ai_settings,screen,ship,bullets):
    """响应按键函数"""
    if event.key == pygame.K_RIGHT:  # 按下的键是左键，向左移动
        ship.moving_right = True
    elif event.key == pygame.K_LEFT:
        ship.moving_left = True
    elif event.key==pygame.K_UP:
        ship.moving_up=True
    elif event.key==pygame.K_DOWN:
        ship.moving_down=True
    elif event.key==pygame.K_SPACE:
        fire_bullet(ai_settings,screen,ship,bullets)
    elif event.key==pygame.K_q:#结束程序按键quit
        sys.exit()

def check_keyup_events(event,ship):
    if event.key == pygame.K_LEFT:
        ship.moving_left = False
    elif event.key == pygame.K_RIGHT:  # 这里判断松开的键是否是right键
        ship.moving_right = False
    elif event.key==pygame.K_UP:
        ship.moving_up=False
    elif event.key==pygame.K_DOWN:
        ship.moving_down=False

#这个函数放置管理事件的代码，隔离事件管理循环
def check_events(ai_settings,screen,stats,sb,play_button,ship,aliens,bullets):
    """响应按键和鼠标事件"""
    #监视键盘和鼠标事件
        #监听用户事件：事件循环
    for event in pygame.event.get():#它可以获取用户当前所作动作的事件列表
        if event.type==pygame.QUIT:#判断用户是否点击了关闭按钮
            sys.exit()#可使程序中途退出
        elif event.type==pygame.KEYDOWN:#每次用户按键都会注册为一个KEYDOWN事件
            check_keydown_events(event,ai_settings,screen,ship,bullets)
        elif event.type==pygame.KEYUP:#每次用户松开键都会主次一个KEYUP事件
            check_keyup_events(event,ship)
        elif event.type==pygame.MOUSEBUTTONDOWN:
            mouse_x,mouse_y=pygame.mouse.get_pos()
            check_play_button(ai_settings,screen,stats,sb,play_button,ship,aliens,bullets,mouse_x,mouse_y)

def check_play_button(ai_settings,screen,stats,sb,play_button,ship,aliens,bullets,mouse_x,mouse_y):
    """在玩家单击play按钮时开始游戏"""
    button_chicked=play_button.rect.collidepoint(mouse_x,mouse_y)
    if button_chicked and not stats.game_active:
        #重置游戏设置
        ai_settings.initialize_dynamic_settings()
        #隐藏光标
        pygame.mouse.set_visible(False)
        #重置游戏统计数据
        stats.reset_stats()
        stats.game_active=True
        #重置记分牌：
        sb.prep_score()
        sb.prep_high_score()
        sb.prep_level()
        sb.prep_ships()
        #清空外星人列表和子弹列表
        aliens.empty()
        bullets.empty()
        #创建一群新的机器人，并让飞船居中
        create_fleet(ai_settings,screen,ship,aliens)
        ship.center_ship()

def update_screen(ai_settings,screen,stats,sb,ship,aliens,bullets,play_button):
    """更新屏幕上的图像，并切换到新屏幕"""
    #每次循环时都重绘屏幕
    screen.fill(ai_settings.bg_color)  # 这个方法是用背景色填充屏幕，使用实例属性
    #显示得分
    sb.show_score()
    #在飞船和外星人后面重绘所有子弹
    for bullet in bullets.sprites():#方法bullets.sprites（）返回一个列表，其中包含编组bullets中所有的精灵
        bullet.draw_bullet()
    ship.blitem()  # 调用定义的方法，将飞机绘制在屏幕上
    aliens.draw(screen)#对编组调用draw()时，pygame会自动绘制编组中的每个元素，绘制位置由元素属性rect决定
    #如果游戏处于非活动状态，就绘制Play按钮
    if not stats.game_active:
        play_button.draw_button()
    # 让最近绘制的屏幕可见
    pygame.display.flip()  # 更新整个待显示的 Surface 对象到屏幕上
    # 激活游戏的动画循环后，每经过一次循环都将自动重绘这个surface

def update_bullets(ai_settings,screen,stats,sb,ship,aliens,bullets):
    bullets.update()  # 所有子弹移动函数：对编组调用update()时，编组将自动对其中的每个精灵调用update()
    check_bullet_alien_collisions(ai_settings,screen,stats,sb,ship,aliens,bullets)

    # 删除已消失的子弹
    for bullet in bullets.copy():
        if bullet.rect.bottom <= 0:
            bullets.remove(bullet)  # 将这些子弹从编组中移出

def check_bullet_alien_collisions(ai_settings,screen,stats,sb,ship,aliens,bullets):#检测飞船和外星人之间的碰撞
    """检查是否有子弹击中外星人，如果是，就删除相应的子弹和外星人"""
    collisions = pygame.sprite.groupcollide(bullets, aliens, True, True)
    """这行代码遍历编组bullets中的每颗子弹，再遍历编组aliens中的每个外星人。
    每当 有子弹和外星人的rect重叠时，groupcollide()就在它返回的字典中添加一个键值对。
    两个实参True告诉Pygame删除发生碰撞的子弹和外星人.
    """
    if collisions:
        for aliens in collisions.values():
            stats.score += ai_settings.alien_points
            sb.prep_score()
        check_high_score(stats,sb)
    if len(aliens) == 0:  # 若外星人编组为空
        """删除现有的子弹并新建一群外星人"""
        bullets.empty()  # 删除子弹
        ai_settings.increase_speed()#加快游戏节奏
        stats.level+=1
        sb.prep_level()#提高等级
        create_fleet(ai_settings, screen, ship, aliens)  # 新建外星人

def fire_bullet(ai_settings,screen,ship,bullets):
    if len(bullets) < ai_settings.bullets_allowed:  # 限制发射
        new_bullet = Bullet(ai_settings, screen, ship)  # 增加（发射）一颗子弹
        bullets.add(new_bullet)  # 使用方法add（）将新子弹加入到编组bullets中

def get_number_aliens_x(ai_settings,alien_width):#外星人一行容纳空间函数
    available_space_x = ai_settings.screen_width - 2 * alien_width  # 一行容纳外星人空间
    number_aliens_x = int(available_space_x / (2 * alien_width))  # 一行外星人数
    return number_aliens_x

def get_number_rows(ai_settings,ship_height,alien_height):
    """计算屏幕可容纳多少行外星人"""
    available_space_y=(ai_settings.screen_height-(3*alien_height)-ship_height)
    number_rows=int(available_space_y/(2*alien_height))
    return number_rows

def create_alien(ai_settings,screen,aliens,alien_number,row_number):
    """创建一个外星人并加入当前行"""
    alien = Alien(ai_settings, screen)
    alien_width=alien.rect.width
    alien.x = alien_width + 2 * alien_width * alien_number
    alien.rect.x = alien.x
    alien.rect.y=alien.rect.height+2*alien.rect.height*row_number
    aliens.add(alien)


def create_fleet(ai_settings,screen,ship,aliens):
    """创建外星人群"""
    #创建一个外星人，并计算一行可容纳多少个外星人
    #他们之间有间距：间距设为外星人宽度
    alien=Alien(ai_settings,screen)
    number_aliens_x=get_number_aliens_x(ai_settings,alien.rect.width)#计算一行容量
    number_rows=get_number_rows(ai_settings,ship.rect.height,alien.rect.height)

    #创建第一行外星人
    for row_number in range(number_rows):
        for alien_number in range(number_aliens_x):
            create_alien(ai_settings, screen, aliens, alien_number,row_number)  # 调用创建外星人的函数

def check_fleet_edges(ai_settings,aliens):
    """有外星人到达边缘时应该采取相应的措施"""
    for alien in aliens.sprites():
        if alien.check_edges():
            change_fleet_direction(ai_settings,aliens)
            break

def change_fleet_direction(ai_settings,aliens):
    """将整群外星人下移，并改变他们的方向"""
    for alien in aliens.sprites():
        alien.rect.y+=ai_settings.fleet_drop_speed
    ai_settings.fleet_direction*=-1

def ship_hit(ai_settings,stats,screen,sb,ship,aliens,bullets):
    """响应被外星人撞到的飞船"""
    if stats.ships_left>0:
        # 将ships_left减1
        stats.ships_left -= 1
        #更新积分牌
        sb.prep_ships()
        # 清空外星人列表和子弹列表
        aliens.empty()
        bullets.empty()
        # 创建一群新的外星人，并将飞船放到屏幕底端的中央
        create_fleet(ai_settings, screen, ship, aliens)
        ship.center_ship()
        # 这里暂停一会，让用户看到效果
        sleep(0.5)
    else:
        stats.game_active=False
        pygame.mouse.set_visible(True)#显示光标

def check_aliens_bottom(ai_settings,stats,screen,sb,ship,aliens,bullets):
    """检查是否有外星人到达屏幕底端"""
    screen_rect=screen.get_rect()
    for alien in aliens.sprites():
        if alien.rect.bottom>=screen_rect.bottom:
            #像飞船被撞一样进行处理
            ship_hit(ai_settings,stats,screen,sb,ship,aliens,bullets)
            break

def update_aliens(ai_settings,stats,screen,sb,ship,aliens,bullets):
    """检查是否有外星人位于屏幕边缘"""
    check_fleet_edges(ai_settings,aliens)
    """更新外星人群中所有外星人的位置"""
    aliens.update()

    #检测外星人和飞船之间的碰撞
    if pygame.sprite.spritecollideany(ship,aliens):
        ship_hit(ai_settings,stats,screen,sb,ship,aliens,bullets)
    """检查是否有外星人到达屏幕底端"""
    check_aliens_bottom(ai_settings, stats, screen,sb, ship, aliens, bullets)

def check_high_score(stats,sb):
    """检查是否诞生了新的最高得分"""
    if stats.score>stats.high_score:
        stats.high_score=stats.score
        sb.prep_high_score()