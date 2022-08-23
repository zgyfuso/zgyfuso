import java.util.ArrayList;
import java.util.List;
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


        Stream<run>stream_____=l.stream();
        stream_____=stream_____.filter(i->"y".equals(i.out_b()));//只支持字符
        // stream_____.forEach((i)->{
        //     System.out.println(i);
        // });
        System.out.println("last:");

        Stream<Integer>number=stream_____.map(run::out_a);
        // number.forEach((i)->{
        //     System.out.println(i);//执行此处需要把前五行代码的输出注释，因为那是终端操作
        // });//前段代码筛选y字符的流对象，此段代码单独输出out_a函数所指

        //封装
        List<Integer>last=number.collect(Collectors.toList());
        for(Integer i:last)
        {
            System.out.println(i);
        }
    }
}
