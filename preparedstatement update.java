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
        Properties properties=new Properties();
        properties.load(new FileInputStream("src\\mysql.properties"));
        String user= properties.getProperty("user");   
        String password=properties.getProperty("password");   
        String url=properties.getProperty("url");   
        String driver=properties.getProperty("driver");
        Class.forName(driver);

        Connection connection=DriverManager.getConnection(url, user, password);
        String sql="insert into actor(id,name,sec) values(null,?,?)";
        PreparedStatement preparedStatement= connection.prepareStatement(sql);
        preparedStatement.setString(1, "test_");
        preparedStatement.setString(2,"t");
        // ResultSet resultset=preparedStatement.executeUpdate();
        int rows=preparedStatement.executeUpdate();
        System.out.println(rows>0?"binggo":"worring");                
    }
}
