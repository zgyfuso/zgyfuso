import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class send {
    public static void main(String[] args) throws Exception{
        //发送方与接收方都需要填写端口
        //因为udp协议没有规定接法端，所以两端都需要指定端口用作接收功能准备
        //两端都可作为发送接受端，数据端口ip号均封装于datagrammpacket
        DatagramSocket socket=new DatagramSocket(8888);//端口指定为0自动分配
        //将发送的内容进行封装
        byte message[]="hello from sender --zgy".getBytes();
        //                                                               可以使用inetaddress。getlocalhost（）                           
        DatagramPacket packet=new DatagramPacket(message, message.length,InetAddress.getByName("172.30.192.247"),9999);
        //发送
        socket.send(packet);

        // byte get[]=new byte[64*1024];
        // DatagramPacket get_packet=new DatagramPacket(get,get.length);
        // socket.receive(get_packet);
        // int length=get_packet.getLength();
        // byte last[]=get_packet.getData();
        // String s_last=new String(last,0,length);
        // System.out.println("以下为内容：");
        // System.out.println(s_last);

        socket.close();
        System.out.println("send退出");
    }
}
