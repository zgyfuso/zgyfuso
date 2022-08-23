package TankGame;

import java.util.Vector;

public class Hero extends Tank{
    Shot shot=null;

    Vector<Shot>shots=new Vector<>();
    public Hero(int x,int y)
    {
        super(x, y);
    }
    public void shutEnemyTank()
    {
        if (shots.size()==5) {
            return;
        }
        //创建shut对象
        switch (getDirection())
        {
            case 0:
                shot=new Shot(getX()+20,getY(),0);
                break;
            case 1:
                shot=new Shot(getX()+60,getY()+20,1);
                break;
            case 2:
                shot=new Shot(getX()+20,getY()+60,2);
                break;
            case 3:
                shot = new Shot(getX(), getY()+20, 3);
                break;
        }
        //将新创建的放入到集合中
            shots.add(shot);
        //启动shut线程
        new Thread(shot).start();
    }
}
