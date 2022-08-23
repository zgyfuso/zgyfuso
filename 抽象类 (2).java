abstract class image
{
    abstract void zhou();
} 
class san extends image
{
    int a,b,c;
    public san(int a,int b,int c)
    {
        this.a=a;
        this.b=b;
        this.c=c;
    }
    public void zhou()
    {
        System.out.println("周长是"+(a+b+c));
    }
}

public class test {
    public static void main(String[] args) throws Exception {
        int a,b,c;
        a=3;b=4;c=5;
        san s=new san(a,b,c);
        s.zhou();
    }
}
