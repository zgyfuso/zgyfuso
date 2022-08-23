import java.io.InputStream;
import java.io.OutputStream;
import java.net.InetAddress;
import java.net.Socket;

public class client {
    public static void main(String[] args) throws Exception{
        Socket socket=new Socket(InetAddress.getLocalHost(),9999);
        OutputStream outputStream=socket.getOutputStream();
        String send_message="name";//name,hobby,else anyone

        System.out.println("client send message is "+send_message);
        outputStream.write(send_message.getBytes());
        System.out.println("发送完毕");
        socket.shutdownOutput();

        InputStream inputStream=socket.getInputStream();
        byte get_message[]=new byte[1024];
        int flag;
        String recall_message=null;
        while((flag=inputStream.read(get_message))!=-1)
        {
            recall_message=new String(get_message,0,flag);
        }
        System.out.println("get sussessful");
        System.out.println("this is recall from server :"+recall_message);

        socket.shutdownInput();
        inputStream.close();
        outputStream.close();

    }
}
