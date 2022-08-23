import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import com.mysql.cj.xdevapi.Result;

public class jdbcUtils_use {
    public static void main(String[] args) throws Exception {
        // new jdbcUtils_use().select();
        new jdbcUtils_use().no_affairs();
    }

    public void no_affairs() throws Exception {
        Connection connection = new mysqlUtils().getCollection();
        String sql = "update account set balance = balance-100 where name ='zgy'";
        String sql_ = "update account set balance = balance+100 where name ='nss'";
        // try 块中抛出一个异常剩下部分不会运行
        PreparedStatement preparedStatement = connection.prepareStatement(sql);
        // 默认自动提交
        preparedStatement.executeUpdate();
        preparedStatement = connection.prepareStatement(sql_);
        preparedStatement.executeUpdate();

    }

    public void affairs() {
        Connection connection = new mysqlUtils().getCollection();
        // 设置为不自动提交
        try {
            connection.setAutoCommit(false);
        } catch (SQLException e2) {
            // TODO Auto-generated catch block
            e2.printStackTrace();
        }
        String sql = "update account set balance = balance-100 where name ='zgy'";
        String sql_ = "update account set balance = balance+100 where name ='nss'";
        try {
            // try 块中抛出一个异常剩下部分不会运行
            PreparedStatement preparedStatement = connection.prepareStatement(sql);
            // 默认自动提交
            preparedStatement.executeUpdate();
            preparedStatement = connection.prepareStatement(sql_);
            preparedStatement.executeUpdate();
            connection.commit();
        } catch (SQLException e) {
            try {
                connection.rollback();
            } catch (SQLException e1) {
                // TODO Auto-generated catch block
                e1.printStackTrace();
            } // 默认回滚事务开始状态
              // TODO Auto-generated catch block
            e.printStackTrace();
        }

    }

    public void select() throws Exception {
        Connection connection = new mysqlUtils().getCollection();
        String sql = "select * from ord";
        PreparedStatement preparedStatement = connection.prepareStatement(sql);
        ResultSet result = preparedStatement.executeQuery();
        while (result.next()) {
            String name = result.getString("name");
            System.out.println(name);
        }
    }

    public void update() throws Exception {
        Connection connection = new mysqlUtils().getCollection();
        String sql = "update ord set name = ? where id =1";
        PreparedStatement preparedStatement = connection.prepareStatement(sql);
        preparedStatement.setString(1, "nss");
        preparedStatement.executeUpdate();
    }
}
