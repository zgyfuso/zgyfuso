package TankGame;

public class Shot implements Runnable{
    int x;//子弹坐标
    int y;
    int direct=0;
    int speed=6;
    boolean isLive=true;

    public Shot(int x, int y, int direct) {
        this.x = x;
        this.y = y;
        this.direct = direct;
    }

    @Override
    public void run() {
        while (isLive){
            try {
                Thread.sleep(50);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
            switch (direct){
                case 0:
                    y-=speed;
                    break;
                case 1:
                    x+=speed;
                    break;
                case 2:
                    y+=speed;
                    break;
                case 3:
                    x-=speed;
                    break;
            }
            System.out.println(x+"   "+y);
            if (!(x >= 0 && x <= 1000 && y >= 0 && y <= 750)
                    ||(((x>200&&x<440)||(x>600&&x<640)||(x>500&&x<540))&&(y==480))) {
                isLive=false;
                break;
            }
        }
    }
}
