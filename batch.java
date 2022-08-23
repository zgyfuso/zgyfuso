import java.sql.Connection;
import java.sql.PreparedStatement;

public class batch {
    public static void main(String[] args) throws Exception {
        // new batch().no_batch();//12008
        new batch().batch();//118

    }

    public void batch()throws Exception
    {
        Connection connection = mysqlUtils.getCollection();
        String sql = "insert into account values(?,?)";
        PreparedStatement preparedStatement = connection.prepareStatement(sql);
        System.out.println("start!");
        long start=System.currentTimeMillis();
        for (int i = 0; i < 5000; i++) {
            preparedStatement.setString(1, "zgy&nss"+i);
            preparedStatement.setDouble(2, 666);
            // preparedStatement.executeUpdate();
            preparedStatement.addBatch();
            //当有一千条记录时才批量执行
            if((i+1)%1000==0)
            {
                preparedStatement.executeBatch();
                preparedStatement.clearBatch();
            }
        }
        long end=System.currentTimeMillis();
        System.out.println("使用了"+(end-start));
        mysqlUtils.close(null, preparedStatement, connection);
    }
    public void no_batch() throws Exception {
        Connection connection = mysqlUtils.getCollection();
        String sql = "insert into account values(?,?)";
        PreparedStatement preparedStatement = connection.prepareStatement(sql);
        System.out.println("start!");
        long start=System.currentTimeMillis();
        for (int i = 0; i < 5000; i++) {
            preparedStatement.setString(1, "zgy&nss"+i);
            preparedStatement.setDouble(2, 666);
            preparedStatement.executeUpdate();
        }
        long end=System.currentTimeMillis();
        System.out.println("使用了"+(end-start));
        mysqlUtils.close(null, preparedStatement, connection);
    }
}
