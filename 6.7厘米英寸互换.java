public class Test {
    double mile;
    public Test() {
        System.out.println("无参数");
    }
    // public Test(int mile)
    // {
    //     this.mile=mile;
    // }
    public void change(double mile)
    {
        System.out.println("厘米是"+mile+"\n转换后英寸是"+(mile*0.39370079));    
    }
    public static void main(String[] args) throws Exception {
           Test t=new Test(3);
           t.change(20);
           t.change(5);
    }
}
