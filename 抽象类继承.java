abstract class colorful
{
    abstract void shine();
}
class green extends colorful
{
    public void shine()
    {
        System.out.println("我会发绿色的光，就像你的头");
    }
}
class red extends colorful
{
    public void shine()
    {
        System.out.println("我会发红色的光，不灵不灵");
    }
}
public class test {
    public static void main(String[] args) throws Exception {
        green g=new green();
        g.shine();
        red r=new red();
        r.shine();
    }
}
