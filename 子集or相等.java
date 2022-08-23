import java.util.ArrayList;
import java.util.Scanner;

public class lll {

    public static void main(String[] args) {
        // new lll().new son_1().out();
        int number[] = { 2, 3 };
        son_1 s = new son_1();
        s.init();
        s.check(number);
        // new lll().new son_1().init();
    }
}

class father {
    protected int[] array = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
}

class son_1 extends father {

    public son_1() {

    }

    private int array_[] = new int[10];

    // ArrayList list=new ArrayList<>();
    public void init() {
        int flag = 0;
        int n;
        Scanner scanner = new Scanner(System.in);
        System.out.println("输入数字0停止:");
        while (true) {
            n = scanner.nextInt();
            if (n == 0) {
                System.out.println("以下为输入内容");
                for (int i : array_) {
                    System.out.print(i + " ");
                }
                break;
            }
            array_[flag++] = n;
            // list.add(n);
            System.out.print("\n->  ");
        }
        // array_=(list.toArray());
    }

    public void check(int in[]) {
        int flag = 0;
        for (int i = 0; i < in.length; i++) {
            for (int j = 0; j < array_.length; j++) {
                if (in[i] == array_[j]) {
                    flag++;
                }
            }
        }
        System.out.println("flag:" + flag);
        if (flag == array_.length) {
            System.out.println("相等");
        } else if (flag <= in.length && flag > 0) {
            System.out.println("是子集");
        } else {
            System.out.println("shayeshushi");
        }
    }
}

class son_2 extends father {

    public son_2() {

    }

    private int array_[] = new int[10];

    // ArrayList list=new ArrayList<>();
    public void init() {
        int flag = 0;
        int n;
        Scanner scanner = new Scanner(System.in);
        System.out.println("输入数字0停止:");
        while (true) {
            n = scanner.nextInt();
            if (n == 0) {
                System.out.println("以下为输入内容");
                for (int i : array_) {
                    System.out.print(i + " ");
                }
                break;
            }
            array_[flag++] = n;
            // list.add(n);
            System.out.print("\n->  ");
        }
        // array_=(list.toArray());
    }

    public void check(int in[]) {
        int flag = 0;
        for (int i = 0; i < in.length; i++) {
            for (int j = 0; j < array_.length; j++) {
                if (in[i] == array_[j]) {
                    flag++;
                }
            }
        }
        System.out.println("flag:" + flag);
        if (flag == array_.length) {
            System.out.println("相等");
        } else if (flag <= in.length && flag > 0) {
            System.out.println("是子集");
        } else {
            System.out.println("shayeshushi");
        }
    }
}
