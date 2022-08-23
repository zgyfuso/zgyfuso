import java.util.Date;
import java.util.Scanner;
public class test {
    public static void main(String[]args){
        // String s="2790266896@qq.com";
        // String s_=s.substring(0,s.indexOf("q")-1);
        // System.out.println(s_);        
        //截取任意QQ邮箱

        // String []s={"张三","李四","王二麻子"};
        // String s_="李四";
        // for(int i=0;i<s.length;i++)
        // {
        //     if(s_.equals(s[i])) System.out.println("他在里面");
        // }
        //判断是否存在于预置列表


        // Date d=new Date();
        // String s=String.format("%tc", d);//全格式
        // System.out.println(s);
        // String hour=String.format("%tl", d);
        // String minute=String.format("%tM", d);
        // String second=String.format("%tS", d);
        // System.out.println(hour+"时"+minute+"分"+second+"秒");
        //时间
        

        // String test="asfas.MMP";
        // String test_="adasf.mmP";
        // if(test.lastIndexOf(".MMP")==-1)
        // {
        //     System.out.println("不是");
        // }else System.out.println("binggo");
        // if(test_.lastIndexOf(".MMP")==-1)
        // {
        //     System.out.println("不是");
        // }else System.out.println("binggo");


        // StringBuilder sbd = new StringBuilder("熊出没小心");
		// System.out.println("未添加标点的字符串：" + sbd.toString());
		// System.out.println("请输入在第几个汉字后加逗号：");
		// int position = 3;
		// sbd.insert(position, "，");
		// System.out.println("添加标点后的字符串：" + sbd.toString());


        // long l=324232342;
        // String s=String.valueOf(l);//支持各种类型，甚至类
        // System.out.println("长度是"+s.length());


        // //String begin="事故";
        // String begin="你是年少的欢喜";
        String begin="abcdefg";
        //String last;
        StringBuilder last=new StringBuilder();
        // for(int i=0;i<begin.length()/2;i++)
        // {
        //     char temp=begin.charAt(i);
        // }
        for(int i=begin.length()-1;i>=0;i--)
        {
            last.append(begin.charAt(i));
        }
        System.out.println(last.toString());
        //字符串倒置
        //另外一种版本,没有我的好
        // Scanner sc = new Scanner(System.in);
		// System.out.println("请输入任意字符串：");
		// String target = sc.next();
		// char[] chr = target.toCharArray();
		// System.out.println("转置后的字符串：");
		// for (int i = chr.length - 1; i >= 0; i--) {
		// 	System.out.print(chr[i]);
		// }
    }
}
