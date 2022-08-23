import java.io.FileInputStream;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.Properties;
import javax.sql.DataSource;
import com.alibaba.druid.pool.DruidDataSourceFactory;

public class druid {
    public static void main(String[] args)throws Exception {
        // new druid().druid();
        new druid().druid_utils_use();
    }
    public void druid_utils_use()throws Exception
    {
       
        Connection connection=druidUtils.getConnection();
        // String sql="select * from actor where name=?";
        String sql="select * from actor";

        PreparedStatement preparedStatement= connection.prepareStatement(sql);
        // preparedStatement.setString(1, "zgy");
        ResultSet resultset=preparedStatement.executeQuery();
        // System.out.println(resultset.next()==true?resultset:"错误");
        while(resultset.next())
        {
            System.out.println(resultset.getString(2));
        }
        druidUtils.close(resultset, null, connection);
    }
    public void druid()throws Exception
    {
        Properties properties=new Properties();
        properties.load(new FileInputStream("src\\druid.properties"));
        DataSource dataSource= 
        DruidDataSourceFactory.createDataSource(properties);
        long start=System.currentTimeMillis();
        for (int i = 0; i < 5000; i++) {
            Connection connection=dataSource.getConnection();
            connection.close();
        }
        System.out.println("ojbk");
        long end=System.currentTimeMillis();
        System.out.println("耗时为："+(end-start));//491
    }
}
