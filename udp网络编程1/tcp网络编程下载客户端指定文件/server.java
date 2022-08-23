import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.ByteArrayOutputStream;
import java.io.FileInputStream;
import java.io.InputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class server {
    public static void main(String[] args) throws Exception{
        ServerSocket serverSocket=new ServerSocket(9999);
        System.out.println("waiting call");
        Socket socket=serverSocket.accept();

        // int flag;
        // byte get_message[]=new byte[1024];
        // String name=null;
        // //读取文件名
        // InputStream inputStream=socket.getInputStream();
        // while((flag=inputStream.read(get_message))!=-1)
        // {
        //     name=new String(get_message,0,flag);
        // }
        
        byte get_message[]=new byte[1024];
        InputStream inputStream=socket.getInputStream();
        inputStream.read(get_message);
        String name=new String(get_message,0,(get_message.toString()).length());

        System.out.println("get successfully");
        
        String file_path="";
        String path="C:\\Users\\Lenovo\\Desktop\\picture.jpg";
        // String target_path="C:\\Users\\Lenovo\\Desktop\\picture_.jpg";
        //创建一个输入流读取文件
        if(name.equals("picture.jpg"))
        {
            file_path=path;
        }else
        {
            System.out.println("file not found");
        }
        BufferedInputStream bis=
        new BufferedInputStream(new FileInputStream(file_path));

        //使用streamutils读取文件到一个字节数组
        byte byte_array[]=stream_to_bytearray(bis);
        
        BufferedOutputStream bos= 
        new BufferedOutputStream(socket.getOutputStream());
        bos.write(byte_array);

        socket.shutdownOutput();

        socket.close();
        serverSocket.close();
        bos.close();
        bis.close();
    }
    public static byte[] stream_to_bytearray(InputStream is) throws Exception
    {
        ByteArrayOutputStream bos=new ByteArrayOutputStream();
        byte temp[]=new byte[1024];
        int flag;
        while((flag=is.read(temp))!=-1)
        {
            bos.write(temp, 0, flag);
        }
        byte last[]=bos.toByteArray();
        bos.close();
        return last;
    }
}
