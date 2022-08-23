package common;

import java.io.Serializable;
//实现无参序列化接口，将来实现序列化传输
public class user implements Serializable{
    private static final long serialVersionUID = 1L;

    // 用户信息
    private String user_id;// 用户名
    private String password;// 密码

    public user()
    {
        
    }
    public user(String user_id, String password) {
        this.user_id = user_id;
        this.password = password;
    }

    public String getUser_id() {
        return user_id;
    }

    public void setUser_id(String user_id) {
        this.user_id = user_id;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

}
