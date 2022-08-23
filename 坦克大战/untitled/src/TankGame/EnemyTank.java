package TankGame;

import java.util.Vector;

public class EnemyTank extends Tank implements Runnable{
    Vector<Shot>shots=new Vector<>();
    //得到敌人坦克vector
    Vector<EnemyTank>enemyTanks=new Vector<>();

    boolean isLive=true;
    public EnemyTank(int x, int y) {
        super(x, y);
    }
    //将mypanel属性移到这里
    public void setEnemyTanks(Vector<EnemyTank>enemyTanks) {
        this.enemyTanks=enemyTanks;
    }

    //判断所有坦克是否与其他坦克发生重叠
    public boolean isTouchEnemyTank() {
        switch (this.getDirection()) {
            case 0://上
                //让当前的敌人坦克和其他所有敌人坦克比较
                for (int i = 0; i < enemyTanks.size(); i++) {
                    //从中取出一辆坦克
                    EnemyTank enemyTank = enemyTanks.get(i);
                    //除去自己
                    if (enemyTank != this) {
                        //上或者下
                        if (enemyTank.getDirection() == 0 || enemyTank.getDirection() == 2) {
                            if (this.getX() >= enemyTank.getX()
                                    && this.getX() <= enemyTank.getX() + 40
                                    && this.getY() >= enemyTank.getY()
                                    && this.getY() <= enemyTank.getY() + 60) {
                                return true;
                            }
                            if (this.getX() + 40 >= enemyTank.getX()
                                    && this.getX() + 40 <= enemyTank.getX() + 40
                                    && this.getY() >= enemyTank.getY()
                                    && this.getY() <= enemyTank.getY() + 60) {
                                return true;
                            }
                        }
                        if (enemyTank.getDirection() == 1 || enemyTank.getDirection() == 3) {
                            if (this.getX() >= enemyTank.getX()
                                    && this.getX() <= enemyTank.getX() + 60
                                    && this.getY() >= enemyTank.getY()
                                    && this.getY() <= enemyTank.getY() + 40) {
                                return true;
                            }
                            if (this.getX() + 40 >= enemyTank.getX()
                                    && this.getX() + 40 <= enemyTank.getX() + 60
                                    && this.getY() >= enemyTank.getY()
                                    && this.getY() <= enemyTank.getY() + 40) {
                                return true;
                            }
                        }
                    }
                }
                break;
            case 1://右
                for (int i = 0; i < enemyTanks.size(); i++) {
                    //从中取出一辆坦克
                    EnemyTank enemyTank = enemyTanks.get(i);
                    //除去自己
                    if (enemyTank != this) {
                        //上或者下
                        if (enemyTank.getDirection() == 0 || enemyTank.getDirection() == 2) {
                            if (this.getX()+60 >= enemyTank.getX()
                                    && this.getX()+60 <= enemyTank.getX() + 40
                                    && this.getY() >= enemyTank.getY()
                                    && this.getY() <= enemyTank.getY() + 60) {
                                return true;
                            }
                            if (this.getX() + 60 >= enemyTank.getX()
                                    && this.getX() + 40 <= enemyTank.getX() + 40
                                    && this.getY()+40 >= enemyTank.getY()
                                    && this.getY()+40 <= enemyTank.getY() + 60) {
                                return true;
                            }
                        }
                        if (enemyTank.getDirection() == 1 || enemyTank.getDirection() == 3) {
                            if (this.getX() +60>= enemyTank.getX()
                                    && this.getX()+60 <= enemyTank.getX() + 60
                                    && this.getY() >= enemyTank.getY()
                                    && this.getY() <= enemyTank.getY() + 40) {
                                return true;
                            }
                            if (this.getX() + 60 >= enemyTank.getX()
                                    && this.getX() + 60 <= enemyTank.getX() + 60
                                    && this.getY()+40 >= enemyTank.getY()
                                    && this.getY()+40 <= enemyTank.getY() + 40) {
                                return true;
                            }
                        }
                    }
                }
                break;
            case 2://下
                for (int i = 0; i < enemyTanks.size(); i++) {
                    //从中取出一辆坦克
                    EnemyTank enemyTank = enemyTanks.get(i);
                    //除去自己
                    if (enemyTank != this) {
                        //上或者下
                        if (enemyTank.getDirection() == 0 || enemyTank.getDirection() == 2) {
                            if (this.getX() >= enemyTank.getX()
                                    && this.getX() <= enemyTank.getX() + 40
                                    && this.getY()+60 >= enemyTank.getY()
                                    && this.getY()+60 <= enemyTank.getY() + 60) {
                                return true;
                            }
                            if (this.getX() + 40 >= enemyTank.getX()
                                    && this.getX() + 40 <= enemyTank.getX() + 40
                                    && this.getY()+60 >= enemyTank.getY()
                                    && this.getY()+60 <= enemyTank.getY() + 60) {
                                return true;
                            }
                        }
                        if (enemyTank.getDirection() == 1 || enemyTank.getDirection() == 3) {
                            if (this.getX()>= enemyTank.getX()
                                    && this.getX() <= enemyTank.getX() + 60
                                    && this.getY()+60 >= enemyTank.getY()
                                    && this.getY()+60 <= enemyTank.getY() + 40) {
                                return true;
                            }
                            if (this.getX() + 40 >= enemyTank.getX()
                                    && this.getX() + 40 <= enemyTank.getX() + 60
                                    && this.getY()+60 >= enemyTank.getY()
                                    && this.getY()+60 <= enemyTank.getY() + 40) {
                                return true;
                            }
                        }
                    }
                }
                break;
            case 3://左
                for (int i = 0; i < enemyTanks.size(); i++) {
                    //从中取出一辆坦克
                    EnemyTank enemyTank = enemyTanks.get(i);
                    //除去自己
                    if (enemyTank != this) {
                        //上或者下
                        if (enemyTank.getDirection() == 0 || enemyTank.getDirection() == 2) {
                            if (this.getX() >= enemyTank.getX()
                                    && this.getX() <= enemyTank.getX() + 40
                                    && this.getY() >= enemyTank.getY()
                                    && this.getY()<= enemyTank.getY() + 60) {
                                return true;
                            }
                            if (this.getX() >= enemyTank.getX()
                                    && this.getX()<= enemyTank.getX() + 40
                                    && this.getY()+40 >= enemyTank.getY()
                                    && this.getY()+40 <= enemyTank.getY() + 60) {
                                return true;
                            }
                        }
                        if (enemyTank.getDirection() == 1 || enemyTank.getDirection() == 3) {
                            if (this.getX()>= enemyTank.getX()
                                    && this.getX() <= enemyTank.getX() + 60
                                    && this.getY() >= enemyTank.getY()
                                    && this.getY()<= enemyTank.getY() + 40) {
                                return true;
                            }
                            if (this.getX()>= enemyTank.getX()
                                    && this.getX() <= enemyTank.getX() + 60
                                    && this.getY()+40 >= enemyTank.getY()
                                    && this.getY()+40 <= enemyTank.getY() + 40) {
                                return true;
                            }
                        }
                    }
                }
                break;
        }
        return false;
    }

    @Override
    public void run()
    {
        while (true){

            //判断shut等于0时，新增一个子弹
            if (isLive && shots.size() <5) {
                Shot s=null;
                //判断方向，建立对应子弹
                switch (getDirection()) {
                    case 0:
                        s=new Shot(getX()+20,getY(),0);
                        break;
                    case 1:
                        s=new Shot(getX()+60,getY()+20,1);
                        break;
                    case 2:
                        s=new Shot(getX()+20,getY()+60,2);
                        break;
                    case 3:
                        s=new Shot(getX(),getY()+20,3);
                        break;
                }
                shots.add(s);
                //启动
                new Thread(s).start();
            }

            //根据坦克方向继续移动，
            switch (getDirection()){
                case 0:
                    for(int i=0;i<60;i++)
                    {
                        if (getY() > 0 && !isTouchEnemyTank()) {
                            moveUp();
                        }
                        try {
                            Thread.sleep(50);
                        } catch (InterruptedException e) {
                            throw new RuntimeException(e);
                        }
                    }

                    break;
                case 1:
                    for(int i=0;i<60;i++)
                    {
                        if(getX()+60<1000&& !isTouchEnemyTank()){
                            moveRight();
                        }
                        try {
                            Thread.sleep(50);
                        } catch (InterruptedException e) {
                            throw new RuntimeException(e);
                        }
                    }

                    break;
                case 2:
                    for(int i=0;i<60;i++)
                    {
                        if(getY()+60<750&& !isTouchEnemyTank()){
                            moveDown();
                        }
                        try {
                            Thread.sleep(50);
                        } catch (InterruptedException e) {
                            throw new RuntimeException(e);
                        }
                    }
                    break;
                case 3:
                    for(int i=0;i<60;i++)
                    {
                        if(getX()>0&& !isTouchEnemyTank()){
                            moveLeft();
                        }
                        try {
                            Thread.sleep(50);
                        } catch (InterruptedException e) {
                            throw new RuntimeException(e);
                        }
                    }
                    break;
            }
            try {
                Thread.sleep(50);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
            //然后随机改变方向
            setDirection((int)(Math.random()*4));

            if (!isLive) {
                break;
            }
        }
    }
}
