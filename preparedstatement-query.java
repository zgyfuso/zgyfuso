import java.io.FileInputStream;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.Properties;

import com.mysql.cj.protocol.Resultset;

public class test {
    public static void main(String[] args) throws Exception 
    {
        //prepare 减少语法错误，提高安全性，有效解决注入，减少编译次数
        
        
        Properties properties=new Properties();
        properties.load(new FileInputStream("src\\mysql.properties"));
        String user= properties.getProperty("user");   
        String password=properties.getProperty("password");   
        String url=properties.getProperty("url");   
        String driver=properties.getProperty("driver");
        Class.forName(driver);
        Connection connection=DriverManager.getConnection(url, user, password);
        String sql="select * from actor where name=?";
        PreparedStatement preparedStatement= connection.prepareStatement(sql);
        preparedStatement.setString(1, "zgy");
        ResultSet resultset=preparedStatement.executeQuery();
        // System.out.println(resultset.next()==true?resultset:"错误");
        while(resultset.next())
        {
            System.out.println(resultset.getString(2));
        }
    }
}
