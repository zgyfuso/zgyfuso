import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class send
{
    public static void main(String[] args) throws Exception{
        DatagramSocket socket=new DatagramSocket(8888);
        byte send_message[]="what is four greater classical novels".getBytes();
        DatagramPacket packet=new DatagramPacket(send_message, send_message.length,InetAddress.getLocalHost(),9999);
        socket.send(packet);
        System.out.println("send sussessfully");

        byte get[]=new byte[1024];
        packet=new DatagramPacket(get, get.length);
        socket.receive(packet);
        String last_message=new String(packet.getData(),0,packet.getLength());
        System.out.println("get message sussessfully");
        System.out.println("\n"+last_message);
    }
}