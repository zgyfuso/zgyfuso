import java.util.ArrayList;
import java.util.Comparator;
import java.util.IntSummaryStatistics;
import java.util.List;
import java.util.Optional;
import java.util.function.Function;
import java.util.stream.Stream;
import java.util.stream.Collectors;

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
        l.add(new run(3, "y", true));
        l.add(new run(4, "y", false));

        // Long count=l.stream().collect(Collectors.counting());
        long count = l.stream().count();// 简化方法
        System.out.println("个数是：" + count);


        Optional<run> max = l.stream().collect(Collectors.maxBy(Comparator.comparing(run::out_a)));
        System.out.println("首元素最大的数据组是： " + max);

        Optional<run>min=l.stream().collect(Collectors.minBy(Comparator.comparing(run::out_a)));
        System.out.println("首元素最小的数据组是： " + min);

        // IntSummaryStatistics sum=l.stream().collect(Collectors.summarizingInt(run::out_a));
        // System.out.println("全部数据的首元素之和为： "+sum);
        //这个是输出全部的总和

        int sum=l.stream().collect(Collectors.summingInt(run::out_a));
        System.out.println("全部数据的首元素之和为： "+sum);

//                                               此处操作数为int，但返回值为double
        Double ave=l.stream().collect(Collectors.averagingInt(run::out_a));
        System.out.println("全部数据首元素平均： "+ave);

        String name=l.stream().map(run::out_b).collect(Collectors.joining(","));
        System.out.println("姓名总和为： "+name);
    }
}
