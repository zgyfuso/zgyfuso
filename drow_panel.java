import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.Graphics; //导入Graphics(绘图)类

public class test extends JFrame{//对应一个窗口
    //定义面板
    private MyPanel mp=null;
    public static void main(String[] args) throws Exception {
        new test();

    }
    //定义构造器
    public test()
    {
        //初始化面板
        mp=new MyPanel();
        //将面板放入窗口()
        this.add(mp);
        //设置窗口大小
        this.setSize(400,300);
        this.setVisible(true);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);//一旦输入退出就真正的释放

    }
}
// 先定义一个面板
class MyPanel extends JPanel {
    //不用显式调用该方法是因为
    //1窗口最大化最小化
    //2第一次调用会自动调用
    //3窗口发生大小会自动调用

    public void paint(Graphics g) {
        super.paint(g);//保留调用父类初始化
        g.drawOval(10, 10, 100, 100);
        
    }
}
