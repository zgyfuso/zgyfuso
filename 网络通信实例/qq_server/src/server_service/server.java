package server_service;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.HashMap;

import javax.lang.model.util.ElementScanner6;

import common.message;
import common.message_type;
import common.user;

//监听9999端口，等待客户端连接

public class server {
    private ServerSocket ss = null;
    // public static void main(String[] args) {
    //     new server();
    // }
    private static HashMap<String,user> valid_users=new HashMap<>();
    //静态初始化
    static{
        valid_users.put("1",new user("1","123456"));
        valid_users.put("2",new user("2","123456"));
        valid_users.put("3",new user("3","123456"));
        valid_users.put("zgy",new user("zgy","197839"));
        valid_users.put("zhy",new user("zhy","197839"));


    }
    private boolean check_user(String user_id,String passward)
    {
        user u=valid_users.get(user_id);
        if(u ==null)
        {
            return false;
        }
        if(!u.getPassword().equals(passward))
        {
            return false;
        }
        return true;
    }

    public server() {
        try {
            System.out.println("服务端于9999端口监听");
            ss = new ServerSocket(9999);

            while (true) {
                Socket socket = ss.accept();
                // 循环监听,当和某个客户端连接后会继续监听
                // 得到socket的对象输入流
                ObjectInputStream ois = new ObjectInputStream(socket.getInputStream());
                //  System.out.println("运行到此");
                user u = (user) ois.readObject();// 读取客户端发送的user对象
               
                ObjectOutputStream oos = new ObjectOutputStream(socket.getOutputStream());
                // 验证用户
                message m = new message();// 成功与否都需要回复，提高作用域
                // if (u.getUser_id().equals("111") && u.getPassword().equals("123456"))
                //新的验证用户是否有效的方法
                if(check_user(u.getUser_id(), u.getPassword())) 
                {
                    // 向客户端发送message对象
                    m.setMessage_type(message_type.MESSAGE_LOGIN_SUCCEED);
                   
                    // 发送回给
                    oos.writeObject(m);
                    // 创建一个线程与客户端保持通讯
                    server_connect_client_thread scct = new server_connect_client_thread(socket, u.getUser_id());
                    scct.start();// 启动线程
                    // 将该线程放入一个集合中进行管理
                    manage_client_threads.add_client_thread(u.getUser_id(), scct);

                } else {
                    System.out.println("用户"+u.getUser_id()+"   "+u.getPassword()+"登录失败");
                    m.setMessage_type(message_type.MESSAGE_LOGIN_FAIL);
                    oos.writeObject(m);
                    socket.close();
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            try {
                ss.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

    }
}
