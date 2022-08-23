interface cila
{
    public void hua();
}
class match implements cila
{
    static int flag=0;
    public match()
    {
        flag++;
        if(flag==1)
        {
            hua();
        }
        else{
            System.out.println("创建过一次啦，滚蛋吧");
        }
    }
    public void hua()
    {
        System.out.println("划好啦");
    }
}
public class test {
    public static void main(String[] args) throws Exception {
       match m=new match();
       match m_=new match();
    }
}
