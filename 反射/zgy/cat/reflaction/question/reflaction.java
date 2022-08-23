package zgy.cat.reflaction.question;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.Properties;

/*
反射优缺点：
    优点：动态语言的基础，框架的基础
    缺点：解释执行，速度较慢

*/
public class reflaction {
    public static void main(String[] args) throws Exception {

        Properties properties = new Properties();
        properties.load(new FileInputStream("src\\re.properties"));
        String calssfullpath = properties.get("classfullpath").toString();
        String methodname = properties.get("method").toString();
        System.out.println("classfullpath is " + calssfullpath);
        System.out.println("method is " + methodname);

        Class c = Class.forName(calssfullpath);// 该类叫Class 对象为这个对象的名字
        Object o = c.newInstance();
        // System.out.println(o.getClass());// 运行类型即为class zgy.cat.cat
        Method method = c.getMethod(methodname);
        method.setAccessible(true);//此为优化代码
        // 通过方法的对象来实现调用方法
        method.invoke(o);

        Field message = c.getField("number");// 只可取得private
        System.out.println(message.get(o));// 此处类型为object

        Constructor constructor = c.getConstructor();// 括号内指定构造器里参数类型,当没写时返回无参构造器
        System.out.println(constructor);

        Constructor constructor_ = c.getConstructor(int.class);// 有参构造器，写法特殊
        System.out.println(constructor_);
    }
}
