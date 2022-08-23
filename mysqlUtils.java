import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Properties;
import javax.management.RuntimeErrorException;

import com.mysql.cj.xdevapi.Collection;



public class mysqlUtils {
    private static String user;
    private static String password;
    private static String url;
    private static String driver;
    // 在static代码块中初始化
    static {
        Properties properties = new Properties();
        try {
            properties.load(new FileInputStream("src\\mysql.properties"));
            user = properties.getProperty("user");
            password = properties.getProperty("password");
            url = properties.getProperty("url");
            driver = properties.getProperty("driver");

        } catch (IOException e) {
            // TODO Auto-generated catch block
            throw new RuntimeException(e);
            //将编译异常转换为运行异常,使用者可以选择捕获或者默认处理
        }
    }
    public static Connection getCollection()
    {
        try {
            return DriverManager.getConnection(url, user, password);
        } catch (SQLException e) {
            // TODO Auto-generated catch block
            throw new RuntimeException();
            //将编译异常转换为运行异常,使用者可以选择捕获或者默认处理
        }
    }
    public static void close(ResultSet set,Statement statement,Connection connection) throws Exception
    {
        if(set !=null)
        {
            set.close();
        }
        if(statement !=null)
        {
            statement.close();
        }
        if(connection !=null)
        {
            connection.close();
        }
    }

}
