package dao;

import java.sql.Connection;
import java.util.List;

import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.handlers.BeanHandler;
import org.apache.commons.dbutils.handlers.BeanListHandler;
import org.apache.commons.dbutils.handlers.ScalarHandler;

public class basic_dao<T> {
    //添加泛型
    private QueryRunner qr=new QueryRunner();
    public int update(String sql,Object...parameters)throws Exception
    {
        Connection connection=null;
        connection=druidUtils.getConnection();
        int update=qr.update(connection, sql,parameters);
        return update;
    }
    //返回多个对象，针对多个表
    public List<T> queryMulti(String sql,Class<T> clazz,Object...parameters)throws Exception
    {
        Connection connection=null;
        connection=druidUtils.getConnection();
        return qr.query(connection, sql, new BeanListHandler<T>(clazz),parameters);
    }
    //查询单行结果通用方法
    public T querySingle(String sql,Class<T> clazz,Object...parameters)throws Exception
    {
        Connection connection=null;
        connection=druidUtils.getConnection();
        return qr.query(connection, sql,new BeanHandler<T>(clazz),parameters);
    }
    //返回单值
    public Object queryScalar(String sql,Object...parameters)throws Exception
    {
        Connection connection=null;
        connection=druidUtils.getConnection();
        return qr.query(connection, sql,new ScalarHandler(),parameters);
    }
}
