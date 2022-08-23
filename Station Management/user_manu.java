import java.util.ArrayList;
import java.util.Collection;
import java.util.Scanner;
import java.util.concurrent.locks.LockSupport;

public class user_manu implements manu {
    user u = new user();
    
   

    public void manu() {
        u.init_collection();
        
        boolean loop = true;
        while (loop) {
            System.out.println("*********************用户菜单*******************");
            System.out.println("1:购票");
            System.out.println("2:查看已购");
            System.out.println("3:退票");
            System.out.println("4:查看可购");
            System.out.println("5:退出");

            Scanner sc = new Scanner(System.in);
            System.out.print("输入你的选择:");
            switch (sc.nextInt()) {
                case 1:
                    System.out.println("购票");
                    u.setCollection();
                    break;
                case 2:
                    System.out.println("查看已购");
                    u.show_number();
                    break;
                case 3:
                    System.out.println("退票");
                    u.delete_number();
                    break;
                case 4:
                    System.out.println("查看可购");
                    u.show_can_number();
                    break;
                case 5:
                    System.out.println("退出用户菜单");
                    loop = false;
                    break;
                default:
                    System.out.println("输入错误，退出！");
                    break;
            }

        }
    }
}
