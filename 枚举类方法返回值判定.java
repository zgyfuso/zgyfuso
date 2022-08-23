import java.util.Scanner;
enum leval
{
    funer,user,vip,rout,nothing;

    public static leval get_leval(int flag) {
        switch(flag)
        {
            case 0:
            return leval.funer;
            case 1:
            return leval.user;
            case 2:
            return leval.vip;
            case 3:
            return leval.rout;
            default:
            return leval.nothing;
        }
    }
}
public class test {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       test t=new test();
       int flag;
       System.out.println("0表示游客，1表示注册用户，2表示VIP会员，3表示管理员，否则啥也不是）");
       System.out.print("输入你的数字: ");
       flag=sc.nextInt();
       leval l=leval.get_leval(flag);
       switch(l)
       {
            case funer:
            System.out.println("你是游客，你啥也不能干，除非充钱");
            break;
            case user:
            System.out.println("你是游客，你可以享受天上人间为您带来的一条龙服务");
            break;
            case vip:
            System.out.println("你是vip，您可以享受百万荷官，在线发牌,一刀999，充一百，反一千的优惠活动");
            break;
            case rout:
            System.out.println("你是管理员，你看谁不爽就可以把他踢出去，欧耶");
            break;
            case nothing:
            System.out.println("你啥也不是，给我充钱去");
            break;

       }
    }
}
