public class Test {
    double f;
    double s;
    public Test()
    {
        f=0;s=0;
    }
    public Test(int f,int s)
    {
        this.f=f;
        this.s=s;
    }
    public void add()
    {
        System.out.println(f+"+"+s+"="+(f+s));
    }
    public void reduce()
    {
        System.out.println(f+"-"+s+"="+(f-s));
    }
    public void mutipuly()
    {
        System.out.println(f+"+"+s+"="+(f*s));
    }
    public void beside()
    {
        System.out.println(f+"+"+s+"="+(f/s));
    }
    public static void main(String[] args) throws Exception {
        Test t=new Test(1,3);
        t.add();
        t.reduce();
        t.mutipuly();
        t.beside();
    }
}
