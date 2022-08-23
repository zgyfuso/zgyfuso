import java.io.FileInputStream;
import java.sql.Connection;
import java.util.Properties;

import com.mchange.v2.c3p0.ComboPooledDataSource;

public class c3p0 {
    public static void main(String[] args) throws Exception {
        // new c3p0().c3p0();
        new c3p0().c3p0_();
    }

    public void c3p0_() throws Exception {
        // 使用配置文件
        // 将c3p0.config.xml拷贝到src目录下
        // 该文件指定了连接数据库连接到连接池的参数
        ComboPooledDataSource comboPooledDataSource = new ComboPooledDataSource("zgy_c3p0");

        long start = System.currentTimeMillis();
        for (int i = 0; i < 5000; i++) {
            Connection connection = comboPooledDataSource.getConnection();
            connection.close();
        }
        System.out.println("ojbk");
        long end = System.currentTimeMillis();
        System.out.println("耗时为：" + (end - start));// 597

    }

    public void c3p0() throws Exception {
        // 创建一个数据源对象
        ComboPooledDataSource comboPooledDataSource = new ComboPooledDataSource();
        Properties properties = new Properties();
        properties.load(new FileInputStream("src\\mysql.properties"));
        String user = properties.getProperty("user");
        String password = properties.getProperty("password");
        String url = properties.getProperty("url");
        String driver = properties.getProperty("driver");
        // 给数据源设置信息
        comboPooledDataSource.setDriverClass(driver);
        comboPooledDataSource.setUser(user);
        comboPooledDataSource.setJdbcUrl(url);
        comboPooledDataSource.setPassword(password);
        comboPooledDataSource.setInitialPoolSize(10);
        comboPooledDataSource.setMaxPoolSize(50);
        long start = System.currentTimeMillis();
        for (int i = 0; i < 5000; i++) {
            Connection connection = comboPooledDataSource.getConnection();
            connection.close();
        }
        System.out.println("ojbk");
        long end = System.currentTimeMillis();
        System.out.println("耗时为：" + (end - start));// 581
    }
}
