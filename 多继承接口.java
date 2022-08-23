interface USB
{
    public void charge();
}
interface TypeC
{
    public void charge();
}
class car implements USB,TypeC
{
    public void charge()
    {
        System.out.println("我在用usb充电");
        System.out.println("没想到吧，我还可以拿typec充电");
    }
}

public class test {
    public static void main(String[] args) throws Exception {
        car c=new car();
        c.charge();
    }
}
