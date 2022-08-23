package TankGame;

public class Bomb {
    int x,y;
    int life=18;
    boolean isLive=true;

    public Bomb(int x, int y) {
        this.x = x;
        this.y = y;
    }
    //减少生命值
    public void lifeDown(){//配合爆炸效果
        if (life>0) {
            life--;
        }else {
            isLive=false;
        }
    }
}
