import java.net.Socket;
import java.io.InputStream;
import java.net.InetAddress;
import java.net.ServerSocket;
public class test_ {
    public static void main(String[] args) throws Exception{
        test_ t=new test_();
        t.socket_();
    }

    public void socket_() throws Exception {
        // 客户端
        // 连接该主机的9999端口
        Socket socket = new Socket(InetAddress.getLocalHost(), 9999);
        System.out.println(socket.getClass());
        System.out.println("连接成功");
        InputStream inputStream=socket.getInputStream();
        byte temp[]=new byte[1024];
        int flag=0;
        while((flag=inputStream.read(temp))!=-1)
        {
            System.out.println(new String(temp,0,flag));
        }
        inputStream.close();
        socket.close();
    }
}
