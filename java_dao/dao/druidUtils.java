package dao;
import java.io.FileInputStream;
import java.sql.Connection;
import java.sql.ResultSet;
import java.util.Properties;
import javax.sql.DataSource;
import com.alibaba.druid.pool.DruidDataSourceFactory;
import java.sql.Statement;

public class druidUtils {
    private static DataSource ds;
    // 加载时只执行一次
    static {
        Properties properties = new Properties();
        try {
            properties.load(new FileInputStream("src\\druid.properties"));
            ds = DruidDataSourceFactory.createDataSource(properties);
        } catch (Exception e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }

    public static Connection getConnection() throws Exception {
        return ds.getConnection();
    }
    //并不是真正意义上的关闭连接，而是将连接放回连接池
    public static void close(ResultSet resultset,Statement statement,Connection connection)throws Exception
    {
        if(resultset!=null)
        {
            resultset.close();
        }
        if(statement!=null)
        {
            statement.close();
        }
        if(connection!=null)
        {
            connection.close();
        }
    }
}
