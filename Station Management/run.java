import java.nio.file.LinkPermission;
import java.util.Scanner;

public class run {
    public static void main(String[] args) {
        boolean loop = true;
        while (loop) {
            System.out.println("***************火车管理系统*******************");
            System.out.println("1:用户");
            System.out.println("2:管理员");
            System.out.println("3:退出");

            Scanner sc = new Scanner(System.in);
            switch (sc.nextInt()) {
                case 1:
                    new user_manu().manu();
                    break;
                case 2:
                    new admin_manu().manu();
                    break;
                case 3:
                    loop = false;
                    System.out.println("感谢使用本系统");
                    break;
                default:
                    System.out.println("输入错误");
                    break;
            }

        }
    }
}
