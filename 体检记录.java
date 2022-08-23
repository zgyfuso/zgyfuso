enum sex
{
    man,woman;
}

class demo<A,B,C>
{
    A a;B b;C c;
    public demo(A a,B b,C c)
    {
        this.a=a;
        this.b=b;
        this.c=c;
    }
    public String out()
    {
     return("a="+a+"  b"+b+"  c"+c);   
    }
}

public class test {
    
    public static void main(String[] args) {
        //demo<int,int,int>错误
        demo<Integer,Integer,Integer>time=new demo(2021,11,28);
        System.out.println(time.out());
        //time.out();不能直接运行
        demo<String,Integer,Integer>profile=new demo("朱冠宇", 182, 19);
        System.out.println(profile.out());
    }
}
