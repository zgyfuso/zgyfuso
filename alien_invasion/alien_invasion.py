import pygame#导入pygame模块
from settings import Settings#从另一个文件中导入Settings类
from ship import Ship#导入Ship类
import game_functions as gf#导入模块作为gf，gf就是一个简化名
from pygame.sprite import Group#导入编组类
from game_stats import GameStats#导入统计信息类
from button import Button#导入Button类
from scoreboard import Scoreboard#导入计分类


#创建游戏窗口
def run_game():   #初始化游戏，并创建一个屏幕对象
    #def定义函数
    pygame.init()#这个函数时pygame初始化，检查这个pygame包是否完整
    ai_settings=Settings()#创建一个Settings实例，存储到变量中
    screen=pygame.display.set_mode((ai_settings.screen_width,ai_settings.screen_height))#使用实例属性
    #创建一个窗口
    #实参(1200, 800)是一个元组，指定了游戏窗口的尺寸
    #bg_color=(200,250,210)#屏幕颜色
    pygame.display.set_caption("Alien Invasion")#定义窗口标题
    #创建开始按钮
    play_button=Button(ai_settings,screen,"let's biu/biu/biu")
    #创建一个用于存储游戏统计信息的实例
    stats=GameStats(ai_settings)
    sb=Scoreboard(ai_settings,screen,stats)#创建记分牌
    #创建一艘飞船
    ship=Ship(ai_settings,screen)#导入类，创建实例
    #创建一个用于存储子弹的编组
    bullets=Group()#创建了一个子弹编组实例
    aliens=Group()#创建一个外星人编组
    #创建外星人群
    gf.create_fleet(ai_settings,screen,ship,aliens)



    # 开始游戏的循环
    while True:
        gf.check_events(ai_settings,screen,stats,sb,play_button,ship,aliens,bullets)#管理事件循环的函数
        if stats.game_active:
            ship.update()  # 调整飞船位置的函数
            gf.update_bullets(ai_settings, screen,stats,sb, ship,aliens, bullets)  # 子弹移动、更新、删除函数
            gf.update_aliens(ai_settings, stats, screen,sb, ship, aliens, bullets)  # 更新外星人函数
        gf.update_screen(ai_settings,screen,stats,sb,ship,aliens,bullets,play_button)#更新屏幕的函数

run_game()
