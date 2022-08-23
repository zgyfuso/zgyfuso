import java.util.HashSet;
import java.util.Collection;
import java.util.Iterator;
import java.util.ArrayList;
import java.util.Set;
import java.util.TreeSet;
import java.util.Random;
import javax.annotation.processing.SupportedSourceVersion;
import java.util.TreeMap;
import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;
public class test {
    public static void main(String[]args){
//         Collection t=new ArrayList<>();
//         t.add("西游记");
//         t.add("水浒传");
//         t.add("三国演义");
//         t.add("红楼梦");
//         Iterator it=t.iterator();
//         while(it.hasNext())
//         {
//             System.out.println(it.next());
//         }
//         System.out.println();
// System.out.println("********************************************");
//         Collection t_=new HashSet<>();//天然排序
//         t_.add("西游记");
//         t_.add("水浒传");
//         t_.add("三国演义");
//         t_.add("红楼梦");
//         Iterator it_=t_.iterator();
//         while(it_.hasNext())
//         {
//             System.out.println(it_.next());
//         }
//         System.out.println();
//         System.out.println("********************************************");
//         Set<Integer>s=new TreeSet<>();//天然排序
//         s.add(55);
//         s.add(2);
//         s.add(0);
//         s.add(54);
//         Iterator<Integer>s_it=s.iterator();
//         while(s_it.hasNext()){
//             System.out.println(s_it.next());
//         }
//         System.out.println();
//         System.out.println("********************************************");


        //    Collection a=new ArrayList<>();
        //    Collection a_=new ArrayList<>();
        //    char[]word={'a','b','c','d','e','f','g','h'};
        // for(int i=0;i<word.length;i++)
        // {
        //     a.add(word[i]);
        // }
        // for(int i=word.length-1;i>=0;i--)
        // {
        //     a_.add(word[i]);
        // }
        // Iterator it=a.iterator();
        // System.out.println("正序");
        // while(it.hasNext()){
        //     System.out.print(it.next()+" ");
        // }
        // it=a_.iterator();
        // System.out.println();
        // System.out.println("反序");
        // while(it.hasNext()){
        //     System.out.print(it.next()+" ");
        // }
        // System.out.println();


        // Random r=new Random();
        // Set<Integer>s=new TreeSet<>();
        // for(int i=0;i<10;i++)
        // {
        //     int temp=r.nextInt(100);
        //     s.add(temp);
        // }
        // Iterator<Integer>it=s.iterator();
        // while(it.hasNext())
        // {
        //     System.out.print(it.next()+" ");
        // }
        // System.out.println();

        Scanner s=new Scanner(System.in);
        Map<String,String>m=new HashMap<>();
        m.put("呼保义", "宋江");
        m.put("智多星", "吴用");
        String flag=s.nextLine();
        System.out.println(m.get(flag));

    }
}
