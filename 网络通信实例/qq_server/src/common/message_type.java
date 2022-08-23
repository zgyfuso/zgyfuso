package common;

public interface message_type
{
    String MESSAGE_LOGIN_SUCCEED="1";
    String MESSAGE_LOGIN_FAIL="2";//失败
    String MESSAGE_COMM_MES="3";//消息信息包
    String MESSAGE_GET_ONLINE_FRIEND="4";//返回在线用户列表
    String MESSAGE_RET_ONLINE_FRIEND="5";//返回在线用户列表
    String MESSAGE_CLIENT_EXIT="6";//客户端请求退出
}