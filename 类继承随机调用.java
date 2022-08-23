import java.util.Random;
class red{}
class blue extends red{}
class green extends red{}

public class test {
    public static void run(red r)
    {
        if(r instanceof blue)
        {
            System.out.print("蓝");
        }else if(r instanceof green){
            System.out.print("绿");
        }else{
            System.out.print("红");
        }
    }
    public static void main(String[] args) throws Exception {
        Random r = new Random();//括号内存放种子
       for(int j=0;j<10;j++)
       {
        for(int i=0;i<3;i++)
        {
            int flag=r.nextInt(4);//此处意味0到3
            if(flag==1) run(new red());
            if(flag==2) run(new green());
            if(flag==3) run(new blue());
        }
        System.out.println();
       }
    // 　　for(int i=0 ; i<5 ;  i++)
    // 　　{
    // 　　　　int ran1 = r.nextInt(100);
    // 　　　　System.out.println(ran1);
    // 　　}
    }
}
