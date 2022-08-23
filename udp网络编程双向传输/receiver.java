import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class receiver
{
    public static void main(String[] args) throws Exception{
        DatagramSocket socket=new DatagramSocket(9999);

        byte message[]=new byte[1024];
        DatagramPacket packet=new DatagramPacket(message,message.length);
        // byte get_message[]=packet.getData();
        System.out.println("wait call");
        socket.receive(packet);
        String last_message=new String(packet.getData(),0,packet.getLength());
        System.out.println("calling");


        if(last_message.equals("what is four greater classical novels"))
        {
            // System.out.println("get it");
            String recall="get it";
            packet=new DatagramPacket(recall.getBytes(), recall.length(),InetAddress.getLocalHost(),8888);
            socket.send(packet);
        }   
        else
        {
            // System.out.println("????????????????");
            String recall="????????????????";
            packet=new DatagramPacket(recall.getBytes(), recall.length(),InetAddress.getLocalHost(),8888);
            socket.send(packet);
        }
        socket.close();
    }
}