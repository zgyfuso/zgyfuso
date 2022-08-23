class people
{
    public people()
    {
        System.out.println("我是构造函数");
       heart h=new heart();
    }
    class heart
    {
        public heart()
        {
            System.out.println("我在跳呢");
        }
    }
}

public class test {
    public static void main(String[] args) throws Exception {
        people p=new people();
    }
}
