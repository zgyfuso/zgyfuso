abstract class simple
{
    int a;int b;
    String color;
    public simple(int a,int b)
    {
       System.out.println("长是"+a+"宽是"+b);
    }
    abstract void get_range();
}
class chang extends simple
{
    int a,b;
    public chang(int c,int d)
    {
        super(c, d);
        this.a=c;
        this.b=d;
    }
    // public chang(int a,int b)
    // {
    //     this.a=a;
    //     this.b=b;
    // }
    public void get_range()
    {
        System.out.println("面积是"+(a*b));
    }
}

public class test {
    public static void main(String[] args) throws Exception {
        chang c=new chang(3, 7);
        c.get_range();
    }
}
