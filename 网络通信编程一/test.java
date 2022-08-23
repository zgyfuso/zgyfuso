import java.io.OutputStream;
import java.net.InetAddress;
import java.net.ServerSocket;
import java.net.Socket;

public class test {
   public static void main(String[] args) throws Exception {
      test t=new test();
      // t.inetaddress();   
      t.socket();
      // t.socket_();
      // System.out.println("中文");

   }
   
   public void socket() throws Exception
   {
      //服务端
      //serversocket 可以通过accept方法返回多个socket对象
      //一个端口可以为多个设备提供连接
      ServerSocket serverSocket=new ServerSocket(9999);
      System.out.println("等待连接");
      Socket socket=serverSocket.accept();
      System.out.println(socket.getClass());
      OutputStream outputStream=socket.getOutputStream();
      outputStream.write("hello come from zgy ".getBytes());
      outputStream.close();
      socket.close();
      serverSocket.close();
      System.out.println("客户端退出啦");
   }
   public void inetaddress() throws Exception
   {
      InetAddress localhost = InetAddress.getLocalHost();
      System.out.println(localhost);
      InetAddress name=InetAddress.getByName("zgy-fuso");
      System.out.println(name);
      InetAddress www=InetAddress.getByName("www.baidu.com");
      System.out.println(www);
      String hostaddress= www.getHostAddress();
      System.out.println(hostaddress);

   }
}
