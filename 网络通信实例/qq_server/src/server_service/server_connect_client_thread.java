package server_service;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.Socket;

import common.message;
import common.message_type;

//该类一个对象和客户端保持通讯
public class server_connect_client_thread extends Thread{
    private Socket socket;
    private String user_id;// 连接到服务端id

    public server_connect_client_thread(Socket socket, String user_id) {
        this.socket = socket;
        this.user_id = user_id;
    }
    public Socket getSocket() {
        return socket;
    }
    public void run()//使线程处于run状态，一直接受消息
    {
        while(true)
        {
            System.out.println("服务端与客户端 "+user_id+" 保持通讯");
            try {
                ObjectInputStream ois=new ObjectInputStream(socket.getInputStream());
                message m=(message) ois.readObject();
                //根据message类型做相应的业务处理
                if(m.getMessage_type().equals(message_type.MESSAGE_GET_ONLINE_FRIEND))
                {
                    //客户端要在线用户列表
                   System.out.println(m.getSender()+"想康康哪个傻逼在线");
                    String onlionUser=manage_client_threads.get_onlion_user();
                    //返回message，也即构建一个message对象，从服务端返回
                    message m_=new message();
                    m_.setMessage_type(message_type.MESSAGE_RET_ONLINE_FRIEND);
                    m_.setContent(onlionUser);
                    m_.setGetter(m.getSender());//发送者变接收者
                    ObjectOutputStream oos=new ObjectOutputStream(socket.getOutputStream());
                    oos.writeObject(m_);
                }
                else if(m.getMessage_type().equals(message_type.MESSAGE_CLIENT_EXIT))
                {
                    System.out.println(m.getSender()+" 退出系统啦");
                    //将这个客户端对应的线程从集合中删除
                    manage_client_threads.remove_server_connect_client(m.getSender());
                    socket.close();//关闭
                    //退出
                    break;
                }
                else if(m.getMessage_type().equals(message_type.MESSAGE_COMM_MES))
                {
                    //根据message获取getterid然后获取对应线程
                    server_connect_client_thread scct= manage_client_threads.get_server_connect_thread(m.getGetter());
                    ObjectOutputStream oos= new ObjectOutputStream(scct.getSocket().getOutputStream());
                    oos.writeObject(m);//转发，如果不在线则转发到数据库，实现离线留言功能
                    System.out.println("转发咯");
                }
                else{
                    System.out.println("等着吧，傻逼");
                }
            } catch (Exception e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
        }
    }
}
