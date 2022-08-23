class rout<T>
{
    public void way(T t)
    {
        if(t instanceof customer)
        {
            System.out.println("你好，顾客");
        }
        if(t instanceof staff)
        {
            System.out.println("你好,职工");
        }
    }
    
}
class customer
{

}
class staff
{

}

public class test {
    public static void main(String[] args) {
        rout<customer>rout_c=new rout();
        customer c=new customer();
        rout_c.way(c);
    }
}
