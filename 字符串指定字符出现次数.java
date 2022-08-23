public class test {
    public static void main(String[] args) throws Exception {
        int number=0;
        String s="abcdefghje";
        char flag='a';
        char flag_='e';
        //System.out.println(flag);
        for(int i=0;i<s.length();i++)
        {
            char temp=s.charAt(i);
            //System.out.println(temp);
            if(temp==flag_)
            {
                //System.out.println("binggo");
                number++;
                //System.out.println(number);
            }
        }
        if(number==0) System.out.println("没有你要查找的字符");
        if(number==1) System.out.println("出现过一次哦");
        if(number>1) System.out.println("这个字符出现次数挺多的，具体来说就是"+number+"次");
    }
}
