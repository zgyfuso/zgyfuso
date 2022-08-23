import java.security.Key;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.DoubleSummaryStatistics;
import java.util.IntSummaryStatistics;
import java.util.List;
import java.util.Map;
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
    private static final Object Key = null;

    public static void main(String[] args) {
        // test t=new test();
        List<run> l = new ArrayList<run>();
        l.add(new run(1, "z", true));
        l.add(new run(2, "g", true));
        l.add(new run(3, "y", false));
        l.add(new run(3, "y", true));
        l.add(new run(4, "y", false));

        //Map<Integer, List<run>>map=l.stream().collect(Collectors.groupingBy(run::out_a));
        //System.out.println("筛选信息表首元素的结果是："+map);

        Map<Integer, Map<Boolean, List<run>>>map=l.stream().collect(Collectors.groupingBy(run::out_a,Collectors.groupingBy(run::out_c)));

        for(Integer i:map.keySet())
        {
            System.out.println(i);//一级
            Map<Boolean, List<run>>map_=map.get(i);
            for(Boolean j:map_.keySet())
            {
                 System.out.println("   "+j);//二级
                for(run k:map_.get(j))
                {
                    System.out.println("        "+k);
                }
            }
        }


    }
}
