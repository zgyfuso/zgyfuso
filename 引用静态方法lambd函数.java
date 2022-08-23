interface A
{
    int add(int a,int b);
}
class B
{
    public static int add(int a,int b)
    {
        return a+b;
    }
}

public class test {
    public static void main(String[] args) {
        // A a=(x,y)->{
        //     return x+y;
        // };
        // System.out.println(a.add(1,2));
        A a=B::add;
        System.out.println(a.add(1, 2));
    }
}
