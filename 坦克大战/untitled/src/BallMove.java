import javax.swing.*;
import java.awt.*;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

public class BallMove extends JFrame{
    MyPanel mp=null;
    public static void main(String[] args) {
        BallMove ballMove = new BallMove();
    }
    public BallMove()
    {
        mp=new MyPanel();
        this.add(mp);
        this.setSize(400, 300);//面板大小
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);
        this.addKeyListener(mp);//接受keylisener类型对象，而实现该接口将实现该接口对象
    }
}

class MyPanel extends JPanel implements KeyListener
{
    int x = 10;
    int y = 10;
    @Override
    public void paint(Graphics g) {
        super.paint(g);
        g.fillOval(x,y,20,20);//defaultBlack
    }
    //有字符输出会监听到
    @Override
    public void keyTyped(KeyEvent e) {

    }
    //键盘弹起
    @Override
    public void keyPressed(KeyEvent e) {
        System.out.println("wasPressed"+(char)e.getKeyCode());
        //根据用户按下的不同键来处理移动
//java中h会给灭一个键设置一个特定的值
        if (e.getKeyCode() == KeyEvent.VK_DOWN) {
            y++;
        } else if (e.getKeyCode() == KeyEvent.VK_UP) {
            y--;
        } else if (e.getKeyCode() == KeyEvent.VK_RIGHT) {
            x++;
        } else if (e.getKeyCode() == KeyEvent.VK_LEFT) {
            x--;
        }

        this.repaint();
        //重绘面板
    }
    //键盘弹起
    @Override
    public void keyReleased(KeyEvent e) {
//        System.out.println("wasPressed"+(char)e.getKeyCode());
    }
}
