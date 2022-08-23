package client.view;

import client.service.message_client_service;
import client.service.user_client_service;
import client.utils.Utility;

public class view {
    // 显示主菜单
    private boolean loop = true;
    private String key = "";// 用户键盘输入
    private user_client_service userclientservice=new user_client_service();//用于登录服务器
    private message_client_service mcs=new message_client_service();//用于群聊

    public static void main(String[] args) throws Exception {
        
        new view().mainmanu();
        System.out.println("\t\t\t客户端退出系统");
    }

    private void mainmanu() throws Exception{
        while (loop) {

            System.out.println("\t\t ███████╗ ██████╗ ██╗   ██╗");
            System.out.println("\t\t ╚══███╔╝██╔════╝ ╚██╗ ██╔╝");
            System.out.println("\t\t   ███╔╝ ██║  ███╗ ╚████╔╝ ");
            System.out.println("\t\t  ███╔╝  ██║   ██║  ╚██╔╝  ");
            System.out.println("\t\t ███████╗╚██████╔╝   ██║   ");
            System.out.println("\t\t ╚══════╝ ╚═════╝    ╚═╝   ");
            System.out.println("\t\t                           ");
            System.out.println("\t\t                    ██████╗ ██████╗ ███╗   ███╗██╗   ██╗");
            System.out.println("\t\t                   ██╔════╝██╔═══██╗████╗ ████║██║   ██║");
            System.out.println("\t\t                   ██║     ██║   ██║██╔████╔██║██║   ██║");
            System.out.println("\t\t                   ██║     ██║   ██║██║╚██╔╝██║██║   ██║");
            System.out.println("\t\t                   ╚██████╗╚██████╔╝██║ ╚═╝ ██║╚██████╔╝");
            System.out.println("\t\t                    ╚═════╝ ╚═════╝ ╚═╝     ╚═╝ ╚═════╝ ");
            System.out.println("\t\t                                                        ");
            System.out.println("\t\t\t*************  1:登录   *************");
            System.out.println("\t\t\t*************  9:退出   *************");
            System.out.print("\t\t\t\t输入你的选择：");
            key = Utility.readString(1);
            switch (key) {
                case "1": {
                    // System.out.println("登录系统");
                    System.out.print("\n\n\t\t\t输入用户号：");
                    String user_id = Utility.readString(50);
                    System.out.print("\n\t\t\t输入密 码：");
                    String pwd = Utility.readString(50);
                    // 到服务端验证该用户是否合法
                    //编写一个类叫做
                    if (userclientservice.check_user(user_id, pwd)) {
                        System.out.println("\t\t\t*******   欢迎" + user_id + "   ********");
                        // System.out.println("二级菜单");
                        while (loop) {
                            System.out.println("\n\n\n\t\t\t*****   网络通信系统二级菜单(" + user_id + ")   *****");
                            System.out.println("\t\t\t1：显示在线用户列表");
                            System.out.println("\t\t\t2：群发消息");
                            System.out.println("\t\t\t3：私聊消息");
                            System.out.println("\t\t\t4：发送文件");
                            System.out.println("\t\t\t9：退出系统");
                            key = Utility.readString(1);
                            switch (key) {
                                case "1":
                                    System.out.println("显示在线列表");
                                    userclientservice.online_friend_list();
                                    //写入一个方法来获取在线用户列表
                                    break;
                                case "2":
                                    System.out.println("群发消息");
                                    break;
                                case "3":
                                    System.out.println("私聊消息");
                                    System.out.print("输入想和谁聊天:");
                                    String getterid= Utility.readString(50);
                                    System.out.print("\n请输入想说的话");
                                    String content=Utility.readString(100);
                                    //传向一个方法
                                    mcs.send_message_to_one(content, user_id, getterid);
                                    break;
                                case "4":
                                    System.out.println("发送文件");
                                    break;
                                case "9":
                                //调用一个方法给服务器一个退出message
                                    loop = false;
                                    break;
                            }
                        }
                    } else 
                    {
                        System.out.println("\t\t\t登录失败");
                    }
                    break;
                }
                case "9":
                    System.out.println("退出系统");
                    new user_client_service().logout();
                    loop = false;
                    break;

            }

        }
    }
}
