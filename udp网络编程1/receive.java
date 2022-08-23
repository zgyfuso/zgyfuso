import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.net.Socket;

public class receive {
    public static void main(String[] args) throws Exception{
        //创建一个datagramsocket接受数据
        //9999端口
        DatagramSocket datagramSocket=new DatagramSocket(9999);
        //创建一个dataprampacket对象
        //udp包最大为64k
        byte message[]=new byte[64*1024];
        DatagramPacket datagramPacket=new DatagramPacket(message, message.length);
        //调用接受方法，将对象填充进入对象中
        //若没有接受到消息将会阻塞于此
        System.out.println("等待接受数据");
        datagramSocket.receive(datagramPacket);
        //拆包取出数据
        //当有数据包发送到本机9999端口时，该方法将会接受到数据，若没有数据包发送该端口会阻塞
        int length=datagramPacket.getLength();
        byte get_message[]=datagramPacket.getData();
        String last=new String(get_message,0,length);
        System.out.println("\n\n最终数据为：\n"+last);
        // datagramPacket 该方法没有关闭
        
        // System.out.println("开始向send方发送数据");
        // byte get[]="come from receiver --zgy".getBytes();
        // DatagramPacket packet=new DatagramPacket(get, get.length,InetAddress.getByName("172.30.192.247"),8888);
        // datagramSocket.send(packet);
        // System.out.println("发送完成");
        
        
        datagramSocket.close();
        System.out.println("receive退出");
        

    }
}
