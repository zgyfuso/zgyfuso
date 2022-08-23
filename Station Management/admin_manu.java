import java.util.Scanner;

public class admin_manu implements manu {
    admin a = new admin();

    // admin_manu am=new admin_manu();
    public void manu() {
        boolean loop = true;
        while (loop) {
            System.out.println("*************管理员菜单******************");
            System.out.println("1:注册车次");
            System.out.println("2:删除车次");
            System.out.println("3:显示车次");
            System.out.println("4:修改车次");
            System.out.println("5:退出");
            Scanner sc = new Scanner(System.in);
            switch (sc.nextInt()) {
                case 1:
                    System.out.println("注册车次");
                    a.setCollection();
                    break;
                case 2:
                    System.out.println("删除车次");
                    a.delete_number();
                    break;
                case 3:
                    System.out.println("显示车次");
                    a.show_number();
                    break;
                case 4:
                    System.out.println("修改车次");
                    a.change_number();
                    break;
                case 5:
                    System.out.println("退出");
                    loop = false;
                    break;
                default:
                    System.out.println("输入错误，退出！");
                    break;
            }

        }
    }
}
