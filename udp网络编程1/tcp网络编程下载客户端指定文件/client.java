import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.ByteArrayOutputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.InetAddress;
import java.net.Socket;

public class client {
    public static void main(String[] args) throws Exception{
        Socket socket=new Socket(InetAddress.getLocalHost(),9999);
        String target_path="C:\\Users\\Lenovo\\Desktop\\picture_.jpg";
        String get="picture.jpg";
        //获取关联输出流
        OutputStream outputStream=socket.getOutputStream();
        outputStream.write(get.getBytes());
        socket.shutdownOutput();

        // outputStream.close();

        InputStream inputStream=socket.getInputStream();
        BufferedInputStream bis=
        new BufferedInputStream(socket.getInputStream());
        byte get_message[]=stream_to_bytearray(bis);
        //得到一个输出流，将得到的byte写入
        BufferedOutputStream bos=
        new BufferedOutputStream(new FileOutputStream(target_path));
        bos.write(get_message);

        System.out.println("sussessfully");
        bis.close();
        bos.close();
        inputStream.close();
        outputStream.close();
        socket.close();
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
