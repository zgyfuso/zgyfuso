import reflaction.zgy.class01;
import java.lang.Thread;
import java.util.Random;
import java.util.Scanner;
import java.lang.Runnable;

public class test {
    public static void main(String[] args) throws Exception {
        Runtime runtime = Runtime.getRuntime();
        // int num=runtime.availableProcessors();
        // System.out.println("当前有cpu个数有："+num);

        // thr t = new thr();
        // t.start();
        // thr_ t_ = new thr_();
        // Thread thread = new Thread(t_);
        // thread.start();

        // for (int i = 0; i < 10; i++) {
        // System.out.println("\n这是主线程");
        // Thread.sleep(500);
        // }

        // T1 t1 = new T1();
        // T2 t2 = new T2();
        // Thread thread1 = new Thread(t1);
        // Thread thread2 = new Thread(t2);
        // thread1.start();
        // thread2.start();

        // sellticket sellticket1 = new sellticket();
        // sellticket sellticket2 = new sellticket();
        // sellticket sellticket3 = new sellticket();

        // Thread s1=new Thread(sellticket1);
        // Thread s2=new Thread(sellticket1);
        // Thread s3=new Thread(sellticket1);

        // s1.start();
        // s2.start();
        // s3.start();

        // Thread.sleep(1*1000);
        // sellticket1.set_loop(false);

        // test_interupt t=new test_interupt();

        // Thread thread=new Thread(t);
        // thread.setName("zgy_eat");
        // thread.setPriority(Thread.MIN_PRIORITY);
        // //最小优先级
        // System.out.println("线程名字是"+thread.getName());
        // thread.start();

        // for(int i=0;i<5;i++)
        // {
        // Thread.sleep(1000);
        // System.out.println("hi+ "+i);
        // }
        // thread.interrupt();

        // 守护线程daemon, 在主线程结束后，子线程自动结束
        // test_protect t=new test_protect();
        // t.setDaemon(true);

        // t.start();

        // for(int i=0;i<10;i++)
        // {
        // System.out.println(" 马蓉在快乐的聊天qwq");
        // Thread.sleep(1000);
        // }
        // System.out.println("马蓉聊完了");

        // test_synch t = new test_synch();
        // Thread thread = new Thread(t);
        // Thread thread0 = new Thread(t);
        // Thread thread1 = new Thread(t);

        // thread.start();

        // thread0.start();
        // // thread0.sleep(5*1000);
        // //该语句可以是后者错过抢锁的时间
        // thread1.start();

        // new just_test().start();
        // new just_get().start();

        just_test t=new just_test();
        just_get g=new just_get();
        //设置被守护的线程为true
        t.setDaemon(true);

        t.start();
        g.start();

        
    }

    public static class just_test extends Thread {
        @Override
        public void run() {
            while (true) {
                Random random = new Random();
                System.out.println("随机数字是：" + random.nextInt(100));
                try {
                    Thread.sleep(2 * 1000);
                } catch (InterruptedException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
            }
        }
    }

    public static class just_get extends Thread {
        @Override
        public void run() {
            while (true) {
                System.out.println("\n!!!!!!!!!!!!!!!输入你的字母!!!!!!!!!!!!!!!\n");
                Scanner sc = new Scanner(System.in);
                String get = sc.next();

                if (get.equals("q")) {
                    System.out.println("\t\t\t\t\t\t\t我退出咯");
                    break;
                } else {
                    System.out.println("\n你输入的不对哦哦哦\n");
                }
            }
        }
    }

    public static class test_synch implements Runnable {
        static int ticket = 100;
        static int ticket_number = 1;
        boolean loop = true;

        @Override
        // 该处添加一个锁，在同一时刻只可以有一个线程来操作执行run方法
        // 采用该方法不适用
        public /* synchronized */ void run() {

            while (loop) {

                sell();
                // if (ticket <= 0) {
                // System.out.println("\n\n售票结束");
                // break;
                // }
            }
        }

        // 有无static无所谓
        public /* synchronized */ void sell()// 同步方法 方法锁
        {
            // 锁代码块
            // 锁住的代码对象必须是同一个，如果不是，解决方法是提升锁的作用域（object）
            synchronized (this) {
                if (ticket <= 0) {
                    System.out.println("\n售票结束\n");
                    loop = false;
                    return;
                }
                System.out.println("这里是 " + Thread.currentThread().getName() + "  该窗口还剩下 " + (--ticket) + "  票号为  "
                        + (ticket_number++));

                try {
                    Thread.sleep(50);
                } catch (InterruptedException e) {
                    // 中断，捕获到一个终端异常，
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
            }
        }

    }

    public static class test_protect extends Thread {
        @Override
        public void run() {
            while (true) {
                System.out.println("宝强在辛苦工作。。。。");
                try {
                    Thread.sleep(500);
                } catch (InterruptedException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
            }
        }
    }

    public static class test_interupt implements Runnable {
        @Override
        public void run() {
            while (true) {
                for (int i = 0; i < 100; i++) {
                    System.out.println("我在吃包子");
                    try {
                        System.out.println("休眠！！！");
                        Thread.sleep(3 * 1000);
                    } catch (InterruptedException e) {
                        System.out.println("被中断了啦啦啦啦啦啦啦");
                    }
                }
            }
        }
    }

    static class sellticket implements Runnable {
        static int ticket = 100;
        static int ticket_number = 0;
        boolean loop = true;

        @Override
        public void run() {

            while (loop) {
                System.out.println("这里是 " + Thread.currentThread().getName() + "  该窗口还剩下 " + (--ticket) + "  票号为  "
                        + (ticket_number++));
                try {
                    Thread.sleep(500);
                } catch (InterruptedException e) {
                    // 中断，捕获到一个终端异常，
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
                if (ticket <= 0) {
                    System.out.println("\n\n售票结束");
                    break;
                }
            }
        }

        public void set_loop(boolean b) {
            loop = b;
        }
    }

    static class T1 implements Runnable {
        @Override
        public void run() {
            for (int i = 0; i < 100; i++) {
                System.out.println("hello T1");
                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
            }
        }
    }

    static class T2 implements Runnable {
        @Override
        public void run() {
            for (int i = 0; i < 100; i++) {
                System.out.println("hello T2");
                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
            }
        }
    }

    static class thr_ implements Runnable {
        int count = 0;

        @Override
        public void run() {
            while (true) {
                System.out.println("\n汪汪汪!!!! " + count);
                try {
                    Thread.sleep(500);
                } catch (InterruptedException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
                if (count++ == 10) {
                    break;
                }
            }
        }
    }

    static class thr extends Thread {
        int times = 1;

        @Override
        public void run() {
            while (true) {
                System.out.println("喵喵喵！！！" + (times++));
                try {
                    Thread.sleep(500);
                } catch (InterruptedException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
                if (times == 10)
                    break;

            }
        }
    }

    public static class thread_test extends Thread {
        public void run() {
            for (int i = 0; i <= 100; i++) {
                System.out.print("one:" + i + "  ");
                if (i % 10 == 0) {
                    System.out.println();
                }
                try {
                    thread_test.sleep(20);
                } catch (InterruptedException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
            }
        }
    }
}
