interface run
{
    void h();
}
interface run_
{
    String h();
}
interface run__
{
    int add(int a,int b);
}
public class test {
    public static void main(String[] args) {
        run one=()->{};//无参返回值
        run_ second=()->{return "这是无参，有返回值";};
        System.out.println(second.h());//调用此lambd函数
        
        run__ third=(x,y)->{
            return x+y;
        };
        System.out.println(third.add(2, 5));
    }
}
