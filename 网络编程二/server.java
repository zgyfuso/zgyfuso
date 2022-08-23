import java.io.InputStream;
import java.io.OutputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class server {
    public static void main(String[] args) throws Exception{
        ServerSocket serverSocket=new ServerSocket(9999);
        System.out.println("等待连接");
        Socket socket=serverSocket.accept();
        
        OutputStream outputStream=socket.getOutputStream();
        outputStream.write("come from server".getBytes());
        //要添加结束标志
        socket.shutdownOutput();
        
        InputStream inputStream=socket.getInputStream();
        byte temp[]=new byte[1024];
        int flag;
        while((flag=inputStream.read(temp))!=-1)
        {
            System.out.println(new String(temp,0,flag));
        }
        
        inputStream.close();
        socket.close();
        serverSocket.close();
        outputStream.close();
    }
}
