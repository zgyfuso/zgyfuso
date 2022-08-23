import java.io.InputStream;
import java.io.OutputStream;
import java.net.InetAddress;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

public class server {
    public static void main(String[] args) throws Exception{
        ServerSocket serverSocket=new ServerSocket(9999);
        System.out.println("等待连接");
        Socket socket=serverSocket.accept();
        System.out.println("连接成功");
        InputStream inputStream=socket.getInputStream();
        byte message[]=new byte[1024];
        int flag;
        String last_message=null;
        while((flag=inputStream.read(message))!=-1)
        {
            last_message=new String(message,0,flag);
        }
        System.out.println("from client message is :"+last_message);

        OutputStream outputStream=socket.getOutputStream();
        if(last_message.equals("name"))
        {
            outputStream.write("zgy_fuso".getBytes());
        }
        else if(last_message.equals("hobby"))
        {
            outputStream.write("code java".getBytes());
        }else
        {
            outputStream.write("??????? --zgy".getBytes());
        }

        
        socket.shutdownOutput();
        outputStream.close();
        inputStream.close();
    }
}
