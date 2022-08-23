import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.BufferedWriter;
import java.io.ByteArrayOutputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStreamWriter;
import java.net.ServerSocket;
import java.net.Socket;

public class server{
    public static void main(String[] args) throws Exception 
    {

        server s=new server();
        //服务器的9999端口
        ServerSocket serverSocket=new ServerSocket(9999);
        //等待连接
        System.out.println("等待连接\n");
        Socket socket=serverSocket.accept();
        

        //读取客户发送内容
        BufferedInputStream bis=new BufferedInputStream(socket.getInputStream());
        byte last[]=s.stream_to_bytearray(bis);
        System.out.println("获取成功\n\n");
        System.out.println("获得数据大小为："+last.length+"\n");
        //将得到的数据写入到计算机指定路径
        String path="C:\\Users\\Lenovo\\Desktop\\picture_.jpg";
        BufferedOutputStream bos=new BufferedOutputStream(new FileOutputStream(path));
        bos.write(last);
        System.out.println("写入文件成功!!!");

        System.out.println("开始向用户传输信息");
        //向客户端回复收到图片
        BufferedWriter bw=new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
        bw.write("收到图片啦");
        bw.flush();
        socket.shutdownOutput();

        bw.close();
        socket.close();
        bos.close();
        bis.close();
    }
    public byte[] stream_to_bytearray(InputStream is) throws Exception
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