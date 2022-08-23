package client.service;

import java.io.ObjectOutputStream;
import java.util.Date;

import common.message;
import common.message_type;

//提供和消息相关的方法
public class message_client_service {
    public void send_message_to_one(String content,String sendid,String getterid) throws Exception 
    {
        //构建message
        message m=new message();
        m.setMessage_type(message_type.MESSAGE_COMM_MES);
        m.setSender(sendid);
        m.setGetter(getterid);
        m.setContent(content);
        m.setSendtime(new Date().toString());
        //将各种信息封装到message对象
        System.out.println(sendid+" 对 "+getterid+" 说了 "+content);
        ObjectOutputStream oos=new ObjectOutputStream(manage_client_connect_server_thread.get_ccst(sendid).getSocket().getOutputStream());
        oos.writeObject(m);
        System.out.println("成功发送");
    }
}
