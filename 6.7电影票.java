
public class Test {
    int year;
    char name;
    int money;
    public Test()
    {
        year=0;
        name='n';
        money=0;
    }
    public Test(int year,char name)
    {
        this.name=name;
        this.year=year;
        if(year<18)
        {
            this.money=40/2;
        }
        else{
            this.money=40;
        }
    }
    public void run()
    {
        System.out.println(name+"      "+year+"      "+money);
    }
    public static void main(String[] args) throws Exception {
        System.err.println("姓名   年龄   票价");
        Test t_1=new Test();
        t_1.run();
        Test t_2=new Test(19,'a');
        t_2.run();
        Test t_3=new Test(23,'b');
        t_3.run();
        Test t_4=new Test(15,'d');
        t_4.run();
    }
}
