import pygame.font
class Button():
    def __init__(self,ai_settings,screen,msg):
        """��ʼ����ť����"""
        self.screen=screen
        self.screen_rect=screen.get_rect()

        #���ð�ť�ߴ����������
        self.width,self.height=280,50
        self.button_color=(0,70,30)
        self.text_color=(255,255,255)
        self.font=pygame.font.SysFont(None,48)
        #ָ��ʹ��ʲô��������Ⱦ�ı���ʵ��None��Pygameʹ��Ĭ�����壬��48 ָ�����ı����ֺ�

        #������ť��rect���󣬲�ʹ�����
        self.rect=pygame.Rect(0,0,self.width,self.height)
        self.rect.center=self.screen_rect.center

        #��ť�ı�ǩֻ�贴��һ��
        self.prep_msg(msg)

    def prep_msg(self,msg):
        """��msg��ȾΪͼ�񣬲�ʹ���ڰ�ť�Ͼ���"""
        self.msg_image=self.font.render(msg,True,self.text_color,self.button_color)#���ı�ת��Ϊͼ��
        #�����True:����font.render()������ һ������ʵ�Σ���ʵ��ָ��������ǹرշ���ݹ��ܣ���������ı��ı�Ե��ƽ������
        self.msg_image_rect=self.msg_image.get_rect()
        self.msg_image_rect.center=self.rect.center

    def draw_button(self):
        #����һ������ɫ���İ�ť���ٻ����ı�
        self.screen.fill(self.button_color,self.rect)
        self.screen.blit(self.msg_image,self.msg_image_rect)
