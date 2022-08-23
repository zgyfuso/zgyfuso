import java.util.Scanner;

public class Test4 {
    public static void main(String[] args) {
        int year;
        double salary,last;
        
        Scanner sc = new Scanner(System.in);
        System.out.println("输入你的本金");
        salary = sc.nextDouble();
        // do{
        // System.out.println("输入你的存款年限(只可为一，二，三，五年):");
        // year=sc.nextInt();
        // }while(year!=1&&year!=2&&year!=3&&year!=5);
        // System.out.println("binggo");
        System.out.println("输入你的存款年限(只可为一，二，三，五年):");
        year = sc.nextInt();
        if(year==1||year==2||year==3||year==5)
        {
            last=run(salary,year);
            System.out.println("本息总额为：");
            System.out.println(last);
        }
        else{
            System.out.println("输入年限有误");
        }
    }
    public static double run(double salary,int year)
    {
        double LiLu=0;
        switch(year)
        {
            case(1): LiLu=2.25;break;
            case(2): LiLu=2.7;break;
            case(3): LiLu=3.25;break;
            case(5): LiLu=3.6;break;
        }
     return salary+salary*LiLu*year;
    }

}
