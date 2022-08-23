import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.*;

public class test extends JFrame{
    //小球移动
    MyPanel mp=null;
    public static void main(String[] args) {
        
    }
    public test()
    {
        mp=new MyPanel();
        this.add(mp);
        this.setSize(400,300);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);
    }
}
class MyPanel extends JPanel implements KeyListener
{
    public void paint(Graphics g)
    {
        super.paint(g);
        g.fillOval(10, 10, 20, 20);

    }
    public void KeyTyped(KeyEvent e)
    {
        
    }
}
