import java.util.ArrayList;
import java.util.List;
import java.util.stream.Stream;

class run {
    private int a;
    private String b;
    private boolean c;

    public run(int a, String b, boolean c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    public int out_a() {
        return a;
    }

    public String out_b() {
        return b;
    }

    public boolean out_c() {
        return c;
    }

    public String toString() {
        return "int a: " + a + "  string b: " + b + "  bollean c: " + c;
    }
}

public class test {
    public static void main(String[] args) {
        // test t=new test();
        List<run> l = new ArrayList<run>();
        l.add(new run(1, "z", true));
        l.add(new run(2, "g", true));
        l.add(new run(3, "y", false));
        l.add(new run(3,"y_",true));
        l.add(new run(3, "y", false));

        l.forEach((i) -> {
            System.out.println(i);
        });
        System.out.println("***********************************");

        Stream<run> stream = l.stream();
        stream.filter((i) -> i.out_a() > 1).forEach(i -> {// 叠加使用的参数相同
            System.out.println(i);
        });
        ;
        System.out.println("***********************************");

        Stream<run> stream_ = l.stream();
        stream_.distinct().forEach((i) -> {//为啥不起作用
            System.out.println(i);
        });
        // stream_=stream_.distinct();
        // stream_.forEach((i)->{System.out.println(i);});

        System.out.println("***********************************");

        Stream<run>stream__=l.stream();
        stream__.skip(2).forEach((i)->{System.out.println(i);});

        System.out.println("***********************************");

        Stream<run>stream___=l.stream();
        stream___.skip(l.size()-2).forEach((i)->{System.out.println(i);});

    }
}
