package TankGame;

import javax.swing.JFrame;

public class zgyTankGame01 extends JFrame{
    //定义一个mypanel
    MyPanel mp=null;
    public static void main(String[] args) {
        zgyTankGame01 ztg=new zgyTankGame01();
    }
    public zgyTankGame01()
    {
        mp=new MyPanel();
        this.add(mp);//把绘图区域也就是游戏绘图区域
        this.setSize(1000,750);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);
    }
}
