package jdbc;

import java.io.FileInputStream;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Properties;

import com.mysql.cj.jdbc.Driver;
import com.mysql.cj.protocol.Resultset;


public class test {
    public static void main(String[] args) throws Exception {
        // new test().one();
        // new test().two();
        // new test().three();
        // new test().four();
        // new test().five();;
        // new test().five_test();
        new test().test_r_s();
    }
    public void test_r_s() throws Exception
    {
        Properties properties=new Properties();
        properties.load(new FileInputStream("src\\jdbc\\mysql.properties"));
        String user= properties.getProperty("user");   
        String password=properties.getProperty("password");   
        String url=properties.getProperty("url");   
        String driver=properties.getProperty("driver");
        Class.forName(driver);
        Connection connection=DriverManager.getConnection(url, user, password);
        Statement statement=(Statement)connection.createStatement();

        String sql="select * from actor";
        ResultSet resultset=statement.executeQuery(sql);

        while(resultset.next())//返回boolean类型
        {
            //让光标下移
            int id= resultset.getInt(1);//get  first column of resultset
            String name=resultset.getNString(2);
            String sex=resultset.getString(3);
            String data=resultset.getString(4);
            String phone=resultset.getString(5);
            System.out.println(id+"  "+name+"  "+sex+"\n"+data+"\n"+phone+"\n\n\n");
        }
    }
    public void five_test() throws Exception
    {
        //写配置文件
        Properties properties=new Properties();
        properties.load(new FileInputStream("src\\jdbc\\mysql.properties"));
        String user= properties.getProperty("user");   
        String password=properties.getProperty("password");   
        String url=properties.getProperty("url");   
        String driver=properties.getProperty("driver");
        Class.forName(driver);
        Connection connection=DriverManager.getConnection(url, user, password);
        Statement statement=(Statement)connection.createStatement();
        String sql="insert into actor values(null,'first','m','2020-1-1','123')";
        String sql_="insert into actor values(null,'second','m','2020-1-1','123')";
        
        int rows=statement.executeUpdate(sql);
        System.out.println(rows>0?"binggo":"shabi");
        rows=statement.executeUpdate(sql_);
        System.out.println(rows>0?"binggo":"shabi");
    }
    public void five() throws Exception
    {
        //写配置文件
        Properties properties=new Properties();
        properties.load(new FileInputStream("src\\jdbc\\mysql.properties"));
        String user= properties.getProperty("user");   
        String password=properties.getProperty("password");   
        String url=properties.getProperty("url");   
        String driver=properties.getProperty("driver");

        Class.forName(driver);
        Connection connection=DriverManager.getConnection(url, user, password);
        System.out.println("第五种："+connection);

    }
    public void four() throws Exception
    {
        //mysql 驱动5.1.6 后不再需要class.forname
        //jdk1.5以后使用jdbc4 不再需要显示调用class.forname() 注册驱动而是自动调用
        //jar 包下的 meta-inf\services\java.sql.driver文本中的类名去注册
        String url = "jdbc:mysql://localhost:3306/test";
        String user = "root";
        String password = "197839";

        Connection connection = DriverManager.getConnection(url, user, password);
        System.out.println("第五种：" + connection);
    }

    public void three() throws Exception {
        // 使用最多
        // 使用class。forname自动完成注册驱动，简化代码
        Class.forName("com.mysql.cj.jdbc.Driver");
        // 使用反射加载了driver类
        // 自动完成注册

        String url = "jdbc:mysql://localhost:3306/test";
        String user = "root";
        String password = "197839";

        Connection connection = DriverManager.getConnection(url, user, password);
        System.out.println("第四种：" + connection);
    }

    public void two() throws Exception {
        // 使用drivermanage替代driver同意管理
        // 灵活方便清晰
        Class<?> class1 = Class.forName("com.mysql.cj.jdbc.Driver");
        Driver driver = (Driver) class1.getDeclaredConstructor().newInstance();
        String url = "jdbc:mysql://localhost:3306/test";
        String user = "root";
        String password = "197839";

        DriverManager.registerDriver(driver);

        Connection connection = DriverManager.getConnection(url, user, password);
        System.out.println("方式三：" + connection);
    }

    public void one() throws Exception {
        // 使用反射加载
        // Class<?> aClass=new Class(" com.mysql.cj.jdbc.Driver");
        Class<?> class1 = Class.forName("com.mysql.cj.jdbc.Driver");// 不能带空格
        Driver driver = (Driver) class1.getDeclaredConstructor().newInstance();

        String url = "jdbc:mysql://localhost:3306/test";
        Properties properties = new Properties();
        properties.setProperty("user", "root");
        properties.setProperty("password", "197839");

        Connection connection = driver.connect(url, properties);
        System.out.println("方式二：" + connection);
    }
}
