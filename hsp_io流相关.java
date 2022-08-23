import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.OutputStreamWriter;
import java.io.Serializable;
import java.util.Properties;

import javax.annotation.processing.SupportedSourceVersion;

public class test {
   public static void main(String[] args) throws Exception {
      test t = new test();
      // t.create_1();
      // t.get_message();
      // t.better_get_message();
      // t.write_message();
      // t.copy_file();
      // t.better_copy_file();
      // t.f_reader();
      // t.better_f_reader();
      // t.f_writer();
      // t.b_writer();
      // t.copy_b_writer_reader();
      // t.o_outputstream();
      // t.o_intputstream();
      // t.i_streamreader();
      // t.o_streamwriter();
      // t.i_streamreader();
      // t.properties();
      // t.init_properties();
      // t.second_test();

   }
   public void third_test() throws Exception
   {

   }

   public void second_test() throws Exception
   {
      String path="C:\\Users\\Lenovo\\Desktop\\text.txt";
      BufferedReader bufferedReader=new BufferedReader(new FileReader(path));
      String flag="";
      int i=0;
      while((flag=bufferedReader.readLine())!=null)
      {
         System.out.println("行号是："+(++i)+flag+";");
      }
      bufferedReader.close();
   }

   public void first_test() throws Exception
   {
      File file=new File("C:\\Users\\Lenovo\\Desktop\\test.txt");
      if(file.exists())
      {
         System.out.println("创建成功");
      }
      else
      {
         System.out.println("失败");
      }
   }

   public void init_properties() throws Exception {
      String path = "C:\\Users\\Lenovo\\Desktop\\mysql_.properties";
      Properties properties = new Properties();
      properties.setProperty("user", "zgy");// 保存为中文的unicode
      properties.setProperty("password", "123456");
      // 此为注释
      properties.store(new FileOutputStream(path), null);
   }

   public void properties() throws Exception {
      String path = "C:\\Users\\Lenovo\\Desktop\\mysql.properties";
      Properties properties = new Properties();
      properties.load(new FileReader(path));
      String user = properties.getProperty("user");
      String pwd = properties.getProperty("pwd");
      System.out.println(user + "\n" + pwd);
   }

   public void o_streamwriter() throws Exception {
      String path = "C:\\Users\\Lenovo\\Desktop\\test.txt";
      OutputStreamWriter osw = new OutputStreamWriter(new FileOutputStream(path), "gbk");
      BufferedWriter bw = new BufferedWriter(osw);
      bw.write("hello zgy 朱冠宇");
      bw.close();
   }

   public void i_streamreader() throws Exception {
      String path = "C:\\Users\\Lenovo\\Desktop\\test.txt";
      InputStreamReader isr = new InputStreamReader(new FileInputStream(path), "gbk");
      BufferedReader br = new BufferedReader(isr);
      String s = br.readLine();
      System.out.println(s);
      br.close();
   }

   public void o_intputstream() throws Exception {
      String path = "C:\\Users\\Lenovo\\Desktop\\test.txt";
      ObjectInputStream ois = new ObjectInputStream(new FileInputStream(path));
      System.out.println(ois.readInt());
      System.out.println(ois.readBoolean());
      System.out.println(ois.readDouble());
      System.out.println(ois.readUTF());
      Object o = ois.readObject();
      System.out.println(o.getClass());
      ois.close();
   }

   public void o_outputstream() throws Exception {
      String path = "C:\\Users\\Lenovo\\Desktop\\test.txt";
      ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(path));
      // 序列化数据到该文件
      // Serializable -> number -> integer.......
      oos.writeInt(100);
      oos.writeBoolean(true);
      oos.writeDouble(9.9);
      oos.writeUTF("by zgy");
      oos.writeObject(new dog("wang_cai", 3));
      oos.close();

      System.out.println("oos写入完成");
   }

   public void copy_b_writer_reader() throws Exception {
      // bufferwriter/reader 按字符读取，不能按照二进制读取，倘若错误使用会损坏文件
      String path = "C:\\Users\\Lenovo\\Desktop\\test_.txt";
      String path_ = "C:\\Users\\Lenovo\\Desktop\\text.txt";
      String flag;
      BufferedReader br = new BufferedReader(new FileReader(path));
      BufferedWriter bw = new BufferedWriter(new FileWriter(path_, true));

      while ((flag = br.readLine()) != null) {
         bw.write(flag);
         bw.newLine();
      }
      br.close();
      bw.close();
   }

   public void b_writer() throws Exception {
      String path = "C:\\Users\\Lenovo\\Desktop\\text.txt";
      // 此处追加
      BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(path, true));
      bufferedWriter.newLine();// 插入系统相关的换行符
      bufferedWriter.write("test bufferwriter");
      bufferedWriter.close();
   }

   public void f_writer() throws Exception {
      // 一定要关闭
      String path = "C:\\Users\\Lenovo\\Desktop\\text.txt";
      String message = "\ntest it";
      FileWriter fileWriter = new FileWriter(path, true);
      fileWriter.append(message);
      fileWriter.close();// 等价与flush，添加了一个关闭行为
      // fileWriter.flush();
      // 两者底层均为writebytes()
   }

   public void better_f_reader() throws Exception {
      String path = "C:\\Users\\Lenovo\\Desktop\\text.txt";
      FileReader fileReader = new FileReader(path);
      int flag = 0;
      char temp[] = new char[8];
      while ((flag = fileReader.read(temp)) != -1) {
         // System.out.print((char)flag);
         System.out.print(new String(temp, 0, flag));
      }
      fileReader.close();
      System.out.println();
   }

   public void f_reader() throws Exception {
      String path = "C:\\Users\\Lenovo\\Desktop\\text.txt";
      FileReader fileReader = new FileReader(path);
      int flag = 0;
      while ((flag = fileReader.read()) != -1) {
         System.out.print((char) flag);
      }
      System.out.println();
   }

   public void better_copy_file() throws Exception {
      String path = "C:\\Users\\Lenovo\\Desktop\\picture.jpg";
      String copy_path = "C:\\Users\\Lenovo\\Desktop\\picture_.jpg";
      FileInputStream fileInputStream = new FileInputStream(path);
      FileOutputStream fileOutputStream = new FileOutputStream(copy_path);
      byte temp[] = new byte[1024];// 缓冲区
      int flag = 0;
      while ((flag = fileInputStream.read(temp)) != -1) {
         // 边读边写
         // fileOutputStream.write(temp);//该方法概率出错
         fileOutputStream.write(temp, 0, flag);// 只可用此方法，否则会因未取满发生乱码（MD5出错）

      }

      fileInputStream.close();
      fileOutputStream.close();
   }

   public void copy_file() throws Exception {
      String path = "C:\\Users\\Lenovo\\Desktop\\text.txt";
      String path_ = "C:\\Users\\Lenovo\\Desktop\\test_.txt";

      // 1,创建输入流，获得文件内容
      // 2,创建输出流，将得到的内容重新写入新文件
      char temp[] = new char[100];
      byte b_temp[] = new byte[100];
      int flag = 0;
      int i = 0;
      FileInputStream fileInputStream = new FileInputStream(path);
      FileOutputStream fileOutputStream = new FileOutputStream(path_);
      while ((flag = fileInputStream.read()) != -1) {
         temp[i++] = (char) flag;
      }
      // System.out.println(temp.toString());//char.tostring后乱码

      System.out.println("成功获取数据，以下为数据");
      for (char j : temp) {
         System.out.print(j);
      }
      System.out.println();
      System.out.println("现在进行文件拷贝");
      String change = new String(temp);
      System.out.println("转换后的string是：" + change);
      b_temp = change.getBytes("utf-8");
      // System.out.println("逐字符输出byte为");
      // for(int k=0;i<b_temp.length;i++)
      // {
      // System.out.print(k);
      // }
      // System.out.println("string转换为byte后为:"+b_temp);
      fileOutputStream.write(b_temp);
      System.out.println("输出成功！");
   }

   // 在该流对象没用被关闭前写入不会覆盖先前数据
   public void write_message() throws Exception {
      String path = "C:\\Users\\Lenovo\\Desktop\\text.txt";
      String message = "\nhello world again";
      // FileOutputStream fileOutputStream=new FileOutputStream(path);//为创建方式
      FileOutputStream fileOutputStream = new FileOutputStream(path, true);// 为追加方式

      fileOutputStream.write(message.getBytes());
      fileOutputStream.write(message.getBytes(), 0, message.length());

      System.out.println("写入成功");
   }

   public void better_get_message() throws Exception {
      String file_path = "C:\\Users\\Lenovo\\Desktop\\text.txt";
      // 字节数组
      byte[] buf = new byte[8];// 一次读取八个字节
      FileInputStream fileInputStream = new FileInputStream(file_path);
      int temp = 0;
      System.out.print("内容是：");
      // temp = fileInputStream.read()
      while ((temp = fileInputStream.read(buf)) != -1) {
         // (char) temp
         System.out.print(new String(buf, 0, temp));
      }
      fileInputStream.close();
      System.out.println("\n关闭成功");
   }

   public void get_message() throws Exception {
      String file_path = "C:\\Users\\Lenovo\\Desktop\\text.txt";
      FileInputStream fileInputStream = new FileInputStream(file_path);
      int temp;
      System.out.print("内容是：");
      while ((temp = fileInputStream.read()) != -1) {
         System.out.print((char) temp);
      }
      fileInputStream.close();
      System.out.println("\n关闭成功");
   }

   public void create_1() throws Exception {
      File new_file1 = new File("C:\\Users\\Lenovo\\Desktop\\new_file.txt");
      if (new_file1.exists()) {
         System.out.println("已经存在啦");
      } else {

         if (new_file1.createNewFile()) {
            System.out.println("创建成功");
         } else {
            System.out.println("失败");
         }
      }
      System.out.println("\n\n");
      System.out.println("文件目录是：" + new_file1.getAbsolutePath());
      System.out.println("文件名字是：" + new_file1.getName());
      System.out.println("文件字节长度是：" + new_file1.length());

   }
}

class dog implements Serializable {
   private String name;
   private int year;

   public dog(String name, int year) {
      this.name = name;
      this.year = year;
   }
}
