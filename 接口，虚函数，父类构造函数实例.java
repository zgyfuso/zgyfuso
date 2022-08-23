interface flyable
{
    public void fly();
}
abstract class insect
{
    int legs;
    public insect(int legs)
    {
        this.legs=legs;
        System.out.println("苍蝇有"+legs+"条腿");
    }
    abstract void reproduce();

}
class cang_ying extends insect implements flyable
{
    public cang_ying()
    {
        super(4);
    }
    public void reproduce()
    {
        System.out.println("苍蝇的繁殖方式是产卵");
    }
    public void fly()
    {
        System.out.println("苍蝇可以在空中飞行");
    }   
}
public class test {
    public static void main(String[] args) throws Exception {
        cang_ying c=new cang_ying();
        c.fly();
        c.reproduce();
    }
}
