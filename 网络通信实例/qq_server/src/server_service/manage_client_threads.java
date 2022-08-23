package server_service;

import java.util.HashMap;
import java.util.Iterator;

//用于管理和客户端通讯的线程
public class manage_client_threads {
    private static HashMap<String,server_connect_client_thread>hm=new HashMap<>();
    //添加线程方法
    public static void add_client_thread(String userid,server_connect_client_thread scct)
    {
        hm.put(userid, scct);
    }
    //根据userid返回一个线程
    public static server_connect_client_thread get_server_connect_thread(String userid)
    {
        return hm.get(userid);
    }
    //返回在线用户列表
    public static String get_onlion_user()
    {
        Iterator<String>iterator=hm.keySet().iterator();
        String onlion_user_list="";
        while(iterator.hasNext())
        {
            onlion_user_list+=iterator.next().toString()+" ";
        }
        return onlion_user_list;
    }
    //从集合中移除某个线程对象
    public static void remove_server_connect_client(String user_id)
    {
        hm.remove(user_id);
    }
}
