interface A
{
    int add_(int a,int b);
}
class B
{
    /*static*/ int add(int a,int b)
    {
        return a+b;
    }
}

public class test {
    public static void main(String[] args) {
        //A a=B::add;    //静态方法
        B b=new B();
        A a=b::add;
        System.out.println(a.add_(1, 2));
    }
}
