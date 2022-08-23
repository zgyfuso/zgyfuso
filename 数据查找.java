import java.util.ArrayList;
import java.util.List;
import java.util.Optional;
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

        // Stream<run>s=l.stream();
        // boolean result=s.allMatch(i->i.out_a()>3);
        // if(result==true) System.out.println("有大于3的数字");
        // else System.out.println("没有");
        // System.out.println(result);

        // System.out.println("**********************************");

        // Stream<run>s_=l.stream();
        // boolean result_=s_.noneMatch(i->i.out_b()!="y");
        // System.out.println(result_);

        boolean result=l.stream().allMatch(i->i.out_a()>3);//是否全部大于三
        System.out.println("所有大于三？ "+result);

        boolean result_=l.stream().anyMatch(i->i.out_a()>3);
        System.out.println("是否存在大于三的？ "+result_);

        boolean result__=l.stream().noneMatch(i->i.out_a()>3);
        System.out.println("是否没有大于三的？ "+result__);

        Optional<run>result___ =l.stream().filter(i->i.out_b()=="y").findFirst();
        System.out.println("第一次出现y："+result___);
    }
}
