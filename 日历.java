import java.util.Scanner;
import java.util.Date;
import java.util.Calendar;
public class test {
    public static void main(String[]args){
        // Scanner sc=new Scanner(System.in);
        // int flag=sc.nextInt();
        // for(int i=0;i<flag;i++)
        // {
        //     for(int j=0;j<flag;j++)
        //     {
        //         System.out.print("* ");
        //     }
        //     System.out.println();
        // }

        // Date d=new Date();
        // long time=d.getTime();
        // System.out.println("1970现在为止经过了"+time+"毫秒");

        StringBuilder str = new StringBuilder(); // 用于记录输出内容
		Calendar c = Calendar.getInstance(); // 获取当期日历对象
		int year = c.get(Calendar.YEAR); // 当前年
		int month = c.get(Calendar.MONTH) + 1; // 当前月
		c.add(Calendar.MONTH, 1); // 向后加一个月
		c.set(Calendar.DAY_OF_MONTH, 0); // 日期变为上个月最后一天
		int dayCount = c.get(Calendar.DAY_OF_MONTH); // 获取月份总天数
		c.set(Calendar.DAY_OF_MONTH, 1); // 将日期设为月份第一天
		int week = c.get(Calendar.DAY_OF_WEEK); // 获取第一天的星期数
		int day = 1; // 从第一天开始
		str.append("\t\t" + year + "-" + month + "\n"); // 显示年月
		str.append("日\t一\t二\t三\t四\t五\t六\n"); // 星期列
		for (int i = 1; i <= 7; i++) { // 先打印空白日期
			if (i < week) { // 如果当前星期小于第一天的星期
				str.append("\t"); // 不记录日期
			} else {
				str.append(day + "\t"); // 记录日期
				day++;// 日期递增
			}
		}
		str.append("\n"); // 换行
		int i = 1; // 7天换一行功能用到的临时变量
		while (day <= dayCount) { // 如果当前天数小于等于最大天数
			str.append(day + "\t");// 记录日期
			if (i % 7 == 0) {// 如果输出到第七天
				str.append("\n");// 换行
			}
			i++;// 临时变量递增
			day++;// 天数递增
		}
		System.out.println(str);// 打印日历
    }
}
