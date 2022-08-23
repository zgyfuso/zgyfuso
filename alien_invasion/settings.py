class Settings():
    """�洢���������ˡ������е���"""
    def __init__(self):
        """��ʼ����̬����"""
        #init������ֻ��һ��self��ָʵ��������������ڲ���������������
        """��ʼ����Ϸ������"""
        #��Ļ����
        self.screen_width=1500
        self.screen_height=850
        self.bg_color=(130,130,130)
        #�ɴ����ٶ�
        self.ship_limit=3#�ɴ���
        #�ӵ�����
        self.bullet_width=20
        self.bullet_height=16
        self.bullet_color=(30,225,0)
        self.bullets_allowed=5#��������δ��ʧ���ӵ���
        #����������
        self.fleet_drop_speed=10#ָ��������ײ����Ļ��Ե�������ƶ����ٶ�
        #��ʲô�����ٶȼӿ���Ϸ����
        self.speed_scale=1.2
        self.initialize_dynamic_settings()
        self.score_scale=1.5#�����˵�������ٶ�

    def initialize_dynamic_settings(self):
        """��ʼ������Ϸ���ж��仯������"""
        self.ship_speed_factor=1.5
        self.bullet_speed_factor=3
        self.alien_speed_factor=0.5
        self.fleet_direction = 1  # 1��ʾ�����ƣ�-1��ʾ������
        self.alien_points=50

    def increase_speed(self):
        """����ٶ�����"""
        self.ship_speed_factor*=self.speed_scale
        self.bullet_speed_factor*=self.speed_scale
        self.alien_speed_factor*=self.speed_scale
        """��������˵���"""
        self.alien_points=int(self.alien_points*self.score_scale)
