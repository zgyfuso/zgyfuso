package client.service;

import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.InetAddress;
import java.net.ServerSocket;
import java.net.Socket;

import common.message;
import common.message_type;
import common.user;

public class user_client_service{
    //完成用户登录验证注册等功能
    //验证是否合法
    private user u=new user();//将user作为一个属性，方便其他地方使用
    //socket也将作为属性，也作为属性
    private Socket socket;

    //向服务器端请求在线用户列表
    public void online_friend_list()throws Exception
    {
        //发送一个message
        message m=new message();
        m.setMessage_type(message_type.MESSAGE_GET_ONLINE_FRIEND);
        m.setSender(u.getUser_id());//拿到名字
        //得到当前线程的socket对应的object
        //得到userid对应的线程对象

        client_connect_server_thread ccst=manage_client_connect_server_thread.get_ccst(u.getUser_id());
        Socket socket=ccst.getSocket();
        // ObjectOutputStream oop=
        // new ObjectOutputStream(manage_client_connect_server_thread.get_ccst(u.getUser_id()).getSocket().getOutputStream());
        ObjectOutputStream oos=new ObjectOutputStream(socket.getOutputStream());
        //发送一个对象
        oos.writeObject(m);
    }
    public void logout()throws Exception
    {
        message m=new message();
        m.setMessage_type(message_type.MESSAGE_CLIENT_EXIT);
        m.setSender(u.getUser_id());//指定客户端id
        //发送message
        ObjectOutputStream oos=new ObjectOutputStream(socket.getOutputStream());
        oos.writeObject(m);
        System.out.println(u.getUser_id()+"退出了系统");
        System.exit(0);
    }

    public boolean check_user(String user_id,String pwd) throws Exception
    {
        boolean b=false;
        //创建一个user对象
        u.setUser_id(user_id);
        u.setPassword(pwd);
        
        //连接到服务端发送user对象
        socket=new Socket("127.0.0.1",9999);
        ObjectOutputStream oos=new ObjectOutputStream(socket.getOutputStream());
        oos.writeObject(u);//发送user对象

        //从服务端读取对象
        //  System.out.println("运行到此");
        ObjectInputStream ois=new ObjectInputStream(socket.getInputStream());
        
        message ms=(message) ois.readObject();//读取到对象
        //钻研此行代码

        //                                          常量
        if(ms.getMessage_type().equals(message_type.MESSAGE_LOGIN_SUCCEED))
        {
           
            //创建一个与服务器端保持通讯的线程   再创建一个线程类 client_connect_server
            client_connect_server_thread clientconnectserverthread=new client_connect_server_thread(socket);
            //启动客户端线程
            clientconnectserverthread.start();
            //未来拓展需要，将该线程放入一个集合中管理
            manage_client_connect_server_thread.add_client_connect_server_thread(user_id, clientconnectserverthread);

            b=true;
            return b;
        }
        else
        {
            socket.close();
            return b;
        }
    }
}
// C:\Users\Lenovo\Desktop\my_qq\qq_server\src\common
// C:\Users\Lenovo\Desktop\my_qq\qq_client\src\common