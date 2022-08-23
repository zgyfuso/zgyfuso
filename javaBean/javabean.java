import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanHandler;
import org.apache.commons.dbutils.handlers.BeanListHandler;
import org.apache.commons.dbutils.handlers.ScalarHandler;
//返回最多使用beanlisthandler
//返回多行多列使用beanhandler
//返回单行单列使用scalarhandler
public class javabean {
    public static void main(String[] args)throws Exception 
    {
        // new javabean().test_link_arraylist_tu();
        // new javabean().test_common_dbutils();
        // new javabean().test_query_single();
        // new javabean().test_scalar();
        new javabean().test_dml();
    }
    //apache+druid dbutils完成单行单列对象
    public void test_dml()throws Exception
    {
        Connection connection=druidUtils.getConnection();
        QueryRunner queryRunner=new QueryRunner();
        String sql="update actor set name=? where id=3";
        int rows= queryRunner.update(connection, sql,"zgy");
        System.out.println(rows);
        druidUtils.close(null, null, connection);
    }
    public void test_scalar()throws Exception
    {
        Connection connection=druidUtils.getConnection();
        QueryRunner queryRunner=new QueryRunner();
        //返回单行单列
        String sql="select name from actor where id=?";
        Object object=
        queryRunner.query(connection, sql, new ScalarHandler<>(),1);
        System.out.println(object);
        druidUtils.close(null, null, connection);
    }
    public void test_query_single()throws Exception
    {
        Connection connection=druidUtils.getConnection();
        QueryRunner queryRunner=new QueryRunner();
        String sql="select * from actor where id=?";
        Actor actor=queryRunner.query(connection,sql,new BeanHandler<>(Actor.class),1);
        System.out.println(actor);
        druidUtils.close(null, null, connection);

    }
    public void test_common_dbutils()throws Exception
    {
        //dbutils and druid
        Connection connection=druidUtils.getConnection();
        //引入jdbcutil jar文件
        QueryRunner queryRunner=new QueryRunner();
        //可以执行相关方法返回结果集
        String sql="select * from actor";
        //query 使用query返回resultset 并且自动封装到arraylist中
        List<Actor> list=
        queryRunner.query(connection, sql, new BeanListHandler<>(Actor.class));
        //                                 告诉底层用反射获得类中的东西并且放入      此处为参数
        for(Actor i:list)
        {
            System.out.println(i);
        }
        druidUtils.close(null, null, connection);

    }
    public void test_link_arraylist_tu() throws Exception {
        ArrayList<Actor> list = new ArrayList<>();
        Connection connection = druidUtils.getConnection();
        String sql = "select * from actor";

        PreparedStatement preparedStatement = connection.prepareStatement(sql);
        ResultSet resultset = preparedStatement.executeQuery();
        while (resultset.next()) {
            int id=resultset.getInt("id");
            String name=resultset.getString("name");
            String sec=resultset.getString("sec");
            String phone=resultset.getString("phone");
            Date borndata=resultset.getDate("borndata");
            list.add(new Actor(id,name,sec,phone,borndata));
        }
        System.out.println("\n\narraylist data:"+list);
        druidUtils.close(resultset, preparedStatement, connection);
        //arraylist 与collectiono没有关联
    }
}
