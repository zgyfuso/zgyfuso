import java.io.InputStream;
import java.io.OutputStream;
import java.net.InetAddress;
import java.net.ServerSocket;
import java.net.Socket;

public class client{
    public static void main(String[] args) throws Exception{
        Socket socket=new Socket(InetAddress.getLocalHost(),9999);
        System.out.println("连接成功\n\n");

        InputStream inputStream=socket.getInputStream();
        byte temp[]=new byte[1024];
        int flag;
        System.out.println("开始接受服务器传输");
        while((flag=inputStream.read(temp))!=-1)
        {
            System.out.println(new String(temp,0,flag));
        }





        OutputStream outputStream=socket.getOutputStream();
        outputStream.write("come from client".getBytes());
        socket.shutdownOutput();
        System.out.println("发送成功");

        inputStream.close();
        outputStream.close();
        socket.close();
    }
}