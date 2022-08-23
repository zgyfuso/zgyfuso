package common;

import java.io.Serializable;

public class message implements Serializable {
    // 表示客户端与服务器端通信时的消息对象
    private static final long serialVersionUID = 1L;

    private String sender;// 发送者
    private String getter;// 接收者
    private String content;// 内容
    private String sendtime;// 发送时间
    private String message_type;//消息类型  可在接口中定义类型

    public String getSender() {
        return sender;
    }

    public void setSender(String sender) {
        this.sender = sender;
    }

    public String getGetter() {
        return getter;
    }

    public void setGetter(String getter) {
        this.getter = getter;
    }

    public String getContent() {
        return content;
    }

    public void setContent(String content) {
        this.content = content;
    }

    public String getSendtime() {
        return sendtime;
    }

    public void setSendtime(String sendtime) {
        this.sendtime = sendtime;
    }

    public String getMessage_type() {
        return message_type;
    }

    public void setMessage_type(String message_type) {
        this.message_type = message_type;
    }

}
