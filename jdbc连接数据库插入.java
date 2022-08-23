package jdbc;
import java.sql.Connection;
import java.sql.Statement;
import java.util.Properties;

import com.mysql.cj.jdbc.*;//此类包名切勿引用错误

public class test
{
    public static void main(String[] args) throws Exception 
    {
        //注册驱动
        Driver driver=new Driver();
        //jdbc:mysql:// 是固定好的，通过jdbc方式连接mysql
        //                                     数据库名字
        //本质是socket连接
        String url="jdbc:mysql://localhost:3306/test";
        Properties properties=new Properties();
        //user与password是已规定好的
        properties.setProperty("user", "root");
        properties.setProperty("password", "197839");
        //connect 就是一个网络连接
        Connection connection= driver.connect(url, properties);
        //执行sql语句
        String sql=" insert into actor values(null,'念诗舒','m','2002-8-27','15125876135')";
        //                   强制类型转换
        Statement statement=(Statement) connection.createStatement();
        int rows= statement.executeUpdate(sql);
        //受影响的行数
        System.out.println(rows>0?"binggo":"shabi");
        
        statement.close();
        connection.close();
    }
}