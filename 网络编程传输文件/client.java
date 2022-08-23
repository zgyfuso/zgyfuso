import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.ByteArrayOutputStream;
import java.io.FileInputStream;
import java.io.InputStream;
import java.net.InetAddress;
import java.net.Socket;
import java.net.SocketTimeoutException;

public class client {
    public static void main(String[] args) throws Exception {
        client c=new client();
        //创建客户端
        //连接到指定服务器
        Socket socket=new Socket(InetAddress.getLocalHost(),9999);
        //读取磁盘文件输入流
        String path="C:\\Users\\Lenovo\\Desktop\\picture.jpg";
        BufferedInputStream bis=new BufferedInputStream(new FileInputStream(path));
        //last为文件最终内容
        byte last[]=c.stream_to_bytearray(bis);
        System.out.println("\n文件的大小为："+last.length);

        //通过socket获取输出流，将数据发送给服务端
        BufferedOutputStream bos=new BufferedOutputStream(socket.getOutputStream());
        bos.write(last);
        socket.shutdownOutput();
        System.out.println("\n发送成功");
        
        //关闭相关流
        bos.close();
        bis.close();
        socket.close();


    }
    public byte[] stream_to_bytearray(InputStream is) throws Exception
    {
        ByteArrayOutputStream bos=new ByteArrayOutputStream();
        byte b[]=new byte[1024];
        int flag;
        while((flag=is.read(b))!=-1)
        {
            bos.write(b, 0, flag);
        }
        byte array[]=bos.toByteArray();
        bos.close();
        return array;
    }
}
