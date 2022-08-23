import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.ByteArrayOutputStream;
import java.io.FileInputStream;
import java.io.FileReader;
import java.io.InputStream;
import java.io.InputStreamReader;
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
        
        InputStream is=socket.getInputStream();
        String result=c.stream_string(is);
        System.out.println("接收成功,内容是：\n");
        System.out.println(result);

        
        //关闭相关流
        bos.close();
        bis.close();
        socket.close();
        is.close();

    }
    public String stream_string(InputStream is) throws Exception
    {
        BufferedReader reader=new BufferedReader(new InputStreamReader(is));
        StringBuilder builder=new StringBuilder();
        String line;
        while((line=reader.readLine())!=null)
        {
            builder.append(line+"\r\n");
        }
        return builder.toString();
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
