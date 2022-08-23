package client.service;

import java.util.HashMap;

public class manage_client_connect_server_thread {
    //该类管理客户端连接到服务器端的线程的类
    private static HashMap<String,client_connect_server_thread>hm=new HashMap<>();
    //将多个线程放入这个集合中
    //key作为用户id，value为线程
    public static void add_client_connect_server_thread(String userid,client_connect_server_thread ccst)
    {
        hm.put(userid, ccst);
    }
    //通过一个userid得到对应的线程
    public static client_connect_server_thread get_ccst(String userid)
    {
        return hm.get(userid);
    }
}
