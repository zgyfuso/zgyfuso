package client.service;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.net.Socket;

import common.message;
import common.message_type;

public class client_connect_server_thread extends Thread{
    //该线程需要持有socket
    private Socket socket;

    //可以接受一个socket对象
    public client_connect_server_thread(Socket socket) {
        this.socket = socket;
    }

    //为了方便使用socket
    public Socket getSocket() {
        return socket;
    }

    public void setSocket(Socket socket) {
        this.socket = socket;
    }
    public void run()
    {
        //该线程需要再后台与服务器通信，所有死循环
        while(true)
        {
            System.out.println("\t\t\t客户端线程等待读取");
            try {
                ObjectInputStream ois=new ObjectInputStream(socket.getInputStream());
                message m=(message) ois.readObject();//如未发送将会阻塞于此

                //判断message类型，做相应的业务处理
                //荣获读取到服务端返回的好友在线用户列表
                if(m.getMessage_type().equals(message_type.MESSAGE_RET_ONLINE_FRIEND))
                {
                    //取出在线列表信息并且显示
                    String online_users[]= m.getContent().split(" ");
                    System.out.println("\n\n\t\t\t在线用户列表");
                    for(int i=0;i<online_users.length;i++)
                    {
                        System.out.println("\t\t\t用户："+online_users[i]);
                    }
                    System.out.println("\n");
                    
                }
                else if(m.getMessage_type().equals(message_type.MESSAGE_COMM_MES))
                {
                    //普通聊天消息
                    //将消息展示
                    System.out.println("收到服务器转发消息");
                    System.out.println("\n"+m.getSender()+" 对 "+m.getGetter()+" 说 "+m.getContent()+"\n"+m.getSendtime());


                }
                else
                {
                    System.out.println("暂时不处理");
                }
            } catch (Exception e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
            break;

        }
    }
    
}
