class GameStats():
    """����ͳ����Ϣ"""

    def __init__(self,ai_settings):
        """��ʼ��ͳ����Ϣ"""
        self.ai_settings=ai_settings
        self.reset_stats()
        self.game_active=False
        #���κ�����£�����Ӧ������ߵ÷�
        self.high_score=0

    def reset_stats(self):
        """��ʼ������Ϸ�����ڼ���ܱ仯��ͳ����Ϣ"""
        self.ships_left=self.ai_settings.ship_limit
        self.score=0
        self.level=1
