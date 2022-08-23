abstract class gongchang//public 类只可以声明在一个新的文件中，一个文件一个public类
{
    abstract void make();
}
class car extends gongchang
{
   public void make() {
       System.out.println("俺们是生产汽车的");
   }
} 
class shoe extends gongchang
{
    public void make()
    {
        System.out.println("俺们是生产鞋子的");
    }
}
public class test {
    
    public static void main(String[] args) throws Exception {
        //gongchang g=new gongchang();
        car c=new car();
        c.make();
        shoe s=new shoe();//抽象类为其提供统一的接口
        s.make();
    }
}
