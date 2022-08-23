import java.util.Scanner;

public class Test1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num_1, num_2,GongYueShu,GongBeiShu;
        System.out.println("输入两个正整数：");
        do {
            System.out.print("             第一个：");
            num_1 = sc.nextInt();
        } while (num_1 <= 0);
        do {
            System.out.print("             第二个：");
            num_2 = sc.nextInt();
        } while (num_1 <= 0);
        GongYueShu=ZuiDaGongYue(num_1, num_2);
        System.out.print("最大公约数是");
        System.out.println(GongYueShu);
        GongBeiShu=ZuiXiaoGongBei(num_1, num_2,GongYueShu);
        System.out.print("最大公倍数是");
        System.out.println(GongBeiShu);

    }

    public static int ZuiDaGongYue(int m, int n) {
        if (m < n) {
            int temp = m;
            m = n;
            n = temp;
        }
        while (m % n != 0) { 
            int temp = m % n;
            m = n;
            n = temp;
        }
        return n;
    }
    public static int ZuiXiaoGongBei(int m,int n,int GongYue){
        int result = m*n /GongYue;
        return result;
    }
}
