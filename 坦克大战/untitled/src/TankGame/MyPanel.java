package TankGame;

import javax.swing.JPanel;
import java.awt.*;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.util.Vector;
//将MYpanel实现runable接口，当作线程使用
public class MyPanel extends JPanel implements KeyListener,Runnable {
    Hero hero = null;
    Vector<EnemyTank> enemyTanks = new Vector<>();
    //定义一个vecto用于存放炸弹
    //当我们的子弹击中坦克时就加入一个bomb对象
    Vector<Bomb> bombs = new Vector<>();
    int enemyTankSize=8;

    //定义三张炸弹图片，用于显示爆炸效果
    Image image1=null;
    Image image2=null;
    Image image3=null;
    public MyPanel() {
        hero = new Hero(500, 600);
        hero.setSpeed(2);

        for (int i = 0; i < enemyTankSize; i++) {
            EnemyTank enemyTank = new EnemyTank(100 * (i + 1), 0);
            //将vector集合设置给enemy坦克对象
            enemyTank.setEnemyTanks(enemyTanks);

            enemyTank.setDirection(2);
            //启动坦克移动线程
            new Thread(enemyTank).start();

            Shot shot = new Shot(enemyTank.getX() + 20, enemyTank.getY() + 60, enemyTank.getDirection());
            enemyTank.shots.add(shot);
            new Thread(shot).start();

            enemyTanks.add(enemyTank);
        }
        //初始化图片对象
        image1=Toolkit.getDefaultToolkit().getImage(MyPanel.class.getResource("bomb.jpg"));
        image2=Toolkit.getDefaultToolkit().getImage(MyPanel.class.getResource("bomb1.jpg"));
        image3=Toolkit.getDefaultToolkit().getImage(MyPanel.class.getResource("wall.jpg"));
    }
    //第一次运行，改动窗口大小，重新加载等都会自动调用该方法
    @Override
    public void paint(Graphics g) {
        super.paint(g);
        g.fillRect(0, 0, 1000, 750);//绘制战场 默认黑色
        g.drawImage(image3,500,480,40,40,this);
        g.drawImage(image3,600,480,40,40,this);
        g.drawImage(image3,640,480,40,40,this);
        g.drawImage(image3,200,480,40,40,this);
        g.drawImage(image3,240,480,40,40,this);
        g.drawImage(image3,280,480,40,40,this);
        g.drawImage(image3,320,480,40,40,this);
        g.drawImage(image3,360,480,40,40,this);
        g.drawImage(image3,400,480,40,40,this);
        if (hero.isLive&&hero!=null) {
            DrawTank(hero.getX(), hero.getY(), g,hero.getDirection(), 0);
        }
        if (hero.shot != null && hero.shot.isLive) {
            g.fillOval(hero.shot.x,hero.shot.y,5,5);
        }

        //将hero的子弹集合遍历取出
        for (int i = 0; i < hero.shots.size(); i++) {
            Shot shot = hero.shots.get(i);
            if (shot != null && shot.isLive) {
                g.fillOval(shot.x,shot.y,5,5);
            }else {//从集合中移除
                hero.shots.remove(shot);
            }
        }

        for(int i=0;i<bombs.size();i++)
        {
            Bomb bomb = bombs.get(i);
            //根据当前bomb对象life值来画出对应的图片
            if(bomb.life>6){
                g.drawImage(image1,bomb.x,bomb.y,60,60,this);
            } else if (bomb.life>3) {
                g.drawImage(image2, bomb.x, bomb.y, 60, 60, this);
            }
//            }else {
//                g.drawImage(image3,bomb.x,bomb.y,60,60,this);
//            }
            //让爆炸生命值减少
            bomb.lifeDown();
            //如果bomb life 为0，就从bombs集合中删除
            if (bomb.life==0) {
                bombs.remove(bomb);
            }
        }

        for (int i = 0; i < enemyTanks.size(); i++) {
            EnemyTank enemyTank = enemyTanks.get(i);//取出所有敌人坦克
            if(enemyTank.isLive){
            DrawTank(enemyTank.getX(),enemyTank.getY(),g,enemyTank.getDirection(),1);
            for (int j = 0; j < enemyTank.shots.size(); j++) {//取出所有子弹
                Shot shot = enemyTank.shots.get(j);//取子弹
                //画子弹
                if (shot.isLive) {
                    g.fillOval(shot.x, shot.y, 5, 5);
                } else {
                    enemyTank.shots.remove(shot);//移去
                }
            }
            }
        }
    }

    // 画坦克封装到方法中
    public void DrawTank(int x, int y, Graphics g, int direction, int type) {
        switch (type) {
            case 0:
                g.setColor(Color.RED);
                break;
            case 1:
                g.setColor(Color.yellow);
                break;
        }
        // 根据方向来绘制坦克
        //根据方向不同绘制不同方向的坦克
        switch (direction) {//0 up,1 right, 2 down, 3 left
            case 0:
                g.fill3DRect(x,y, 10, 60, false);//左轮
                g.fill3DRect(x+30,y, 10, 60, false);//右轮
                g.fill3DRect(x+10,y+10, 20, 40, false);//中间矩形
                g.fillOval(x+10,y+20, 20, 20);//⚪
                g.drawLine(x+20, y+30, x+20, y);//炮筒
                break;
            case 1:
                g.fill3DRect(x,y, 60, 10, false);//左轮
                g.fill3DRect(x,y+30, 60, 10, false);//右轮
                g.fill3DRect(x+10,y+10, 40, 20, false);//中间矩形
                g.fillOval(x+20,y+10, 20, 20);//⚪
                g.drawLine(x+30, y+20, x+60, y+20);//炮筒
                break;
            case 2:
                g.fill3DRect(x,y, 10, 60, false);//左轮
                g.fill3DRect(x+30,y, 10, 60, false);//右轮
                g.fill3DRect(x+10,y+10, 20, 40, false);//中间矩形
                g.fillOval(x+10,y+20, 20, 20);//⚪
                g.drawLine(x+20, y+30, x+20, y+60);//炮筒
                break;
            case 3:
                g.fill3DRect(x,y, 60, 10, false);//左轮
                g.fill3DRect(x,y+30, 60, 10, false);//右轮
                g.fill3DRect(x+10,y+10, 40, 20, false);//中间矩形
                g.fillOval(x+20,y+10, 20, 20);//⚪
                g.drawLine(x+30, y+20, x, y+20);//炮筒
            default:
                System.out.println("ing");
        }
    }

    @Override
    public void keyTyped(KeyEvent e) {

    }

    @Override
    public void keyPressed(KeyEvent e) {
        System.out.println(e.getKeyChar());
        if (e.getKeyCode()== KeyEvent.VK_W) {
            hero.setDirection(0);
//            hero.setY(hero.getY()+1);
            if(hero.getY()>0){
                hero.moveUp();
            }
        } else if (e.getKeyCode()== KeyEvent.VK_D) {
            hero.setDirection(1);
            if(hero.getX()+60<1000){
                hero.moveRight();
            }
        } else if (e.getKeyCode()== KeyEvent.VK_S) {
            hero.setDirection(2);
            if(hero.getY()+60<750){
                hero.moveDown();
            }
        }else if(e.getKeyCode()== KeyEvent.VK_A)
        {
            hero.setDirection(3);
            if(hero.getX()>0){
                hero.moveLeft();
            }
        } else if (e.getKeyCode()==KeyEvent.VK_J) {
            //判断hero的子弹是否消亡
//            if (hero.shot == null || !hero.shot.isLive) {
//                hero.shutEnemyTank();
//            }
            //以上为发射一颗子弹情况
            //以下为发射多颗子弹情况
            hero.shutEnemyTank();
        }
        this.repaint();
    }

    @Override
    public void keyReleased(KeyEvent e) {

    }

    @Override//66666666666666666666666666666666666666666666666666
    public void run() {//每隔一百毫秒自动重绘
        while (true) {
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
            //在此判断坦克是否被击中
//            if (hero.shot != null && hero.shot.isLive) {
//                //遍历所以坦克
//                for (int i = 0; i < enemyTanks.size(); i++) {
//                    EnemyTank enemyTank = enemyTanks.get(i);
//                    hitTank(hero.shot, enemyTank);
//                }
//            }
            hitEnemyTank();
            hitHero();
            this.repaint();
        }
    }
    //如果发射多颗子弹，在判断时需要遍历子弹集合中所以的子弹，与敌人的所有坦克判断
    public void hitEnemyTank(){
        for (int j = 0; j < hero.shots.size(); j++) {
            Shot shot = hero.shots.get(j);
            if (shot != null && shot.isLive) {
                //遍历所以坦克
                for (int i = 0; i < enemyTanks.size(); i++) {
                    EnemyTank enemyTank = enemyTanks.get(i);
                    hitTank(shot, enemyTank);
                }
            }
        }
        if (hero.shot != null && hero.shot.isLive) {
            //遍历所以坦克
            for (int i = 0; i < enemyTanks.size(); i++) {
                EnemyTank enemyTank = enemyTanks.get(i);
                hitTank(hero.shot, enemyTank);
            }
        }
    }

//    public void hitWall() {
//        for (int i = 0; i < enemyTanks.size(); i++) {
//            EnemyTank enemyTank = enemyTanks.get(i);
//            //遍历坦克所有子弹
//            for (int j = 0; j < enemyTank.shots.size(); j++) {
//                //取出子弹
//                Shot shot = enemyTank.shots.get(j);
//                //判断是否击中坦克
//                if () {
//
//                }
//            }
//        }
//    }
    public void hitHero(){
        //遍历所有敌人坦克
        for (int i = 0; i < enemyTanks.size(); i++) {
            EnemyTank enemyTank = enemyTanks.get(i);
            //遍历坦克所有子弹
            for (int j = 0; j < enemyTank.shots.size(); j++) {
                //取出子弹
                Shot shot = enemyTank.shots.get(j);
                //判断是否击中坦克
                if (hero.isLive && shot.isLive) {
                    hitTank(shot,hero);
                }
            }
        }
    }

    //该方法判断子弹是否碰到坦克
    public void hitTank(Shot s,Tank Tank)
    {
        //判断s是否击中坦克
        switch (Tank.getDirection())
        {
            case 0://up
            case 2://down
                if (s.x > Tank.getX() && s.x < Tank.getX() + 40 && s.y > Tank.getY() && s.y < Tank.getY() + 60) {
                    s.isLive=false;
                    Tank.isLive=false;

                    enemyTanks.remove(Tank);
                    //创建一个bomb对象
                    Bomb bomb = new Bomb(Tank.getX(), Tank.getY());
                    bombs.add(bomb);
                }
                break;
            case 1://right
            case 4://left
                if (s.x > Tank.getX() && s.x < Tank.getX() + 60 && s.y > Tank.getY() && s.y < Tank.getY() + 40) {
                    s.isLive=false;
                    Tank.isLive=false;
                    enemyTanks.remove(Tank);
                    Bomb bomb = new Bomb(Tank.getX(), Tank.getY());
                    bombs.add(bomb);
                }
                break;
        }
    }
}
