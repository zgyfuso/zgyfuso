enum mouth{
    jan,feb,mar
}
public class test {
    public static void main(String[] args) {
        //test t=new test();
        out(mouth.feb);
        out(mouth.mar);
        out(mouth.jan);
        //t.out(mar);//此种写法会报错
    }
    public static void out(mouth m)
    {
        switch(m){
            case jan:
            System.out.println("一月-january");
            break;
            case feb:
            System.out.println("二月-febuary");
            break;
            case mar:
            System.out.println("三月-march");
            break;
        }        
    }
}