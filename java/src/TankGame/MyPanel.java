package TankGame;

import javax.swing.JPanel;
import java.awt.*;

public class MyPanel extends JPanel {
    Hero hero = null;

    public MyPanel() {
        hero = new Hero(100, 100);
    }

    public void paint(Graphics g) {
        super.paint(g);
        g.fillRect(0, 0, 1000, 750);// 默认黑色
        DrawTank(hero.getX(), hero.getY(), g,0, 0);
    }

    // 画坦克封装到方法中
    public void DrawTank(int x, int y, Graphics g, int direction, int type) {
        switch (type) {
            case 0:
                g.setColor(Color.cyan);
                break;
            case 1:
                g.setColor(Color.yellow);
                break;
        }
        // 根据方向来绘制坦克
        switch (direction) {
            case 0:
                g.fill3DRect(x,y, 10, 60, false);//左轮
                g.fill3DRect(x+30,y, 10, 60, false);//右轮
                g.fill3DRect(x+10,y+10, 20, 40, false);//中间矩形
                g.fillOval(x+10,y+20, 20, 20);//⚪
                g.drawLine(x+20, y, x+20, y+30);//炮筒
                break;
            default:
                System.out.println("ing");
        }
    }
}
