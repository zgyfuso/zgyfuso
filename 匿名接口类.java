interface flag
{
    void run();
}
// class moveable implements flag
// {
//     public void run()
//     {

//     }
// }
public class test {
    public static void main(String[] args) throws Exception {
      flag f=new flag() {
          public void run()
          {
              System.out.println("没想到吧，我他娘的会跑");
          }
      };
      f.run();
    }
}
