import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;

public class test {
    public static void main(String[] args) {
        File file=new File("C://Users//Lenovo//Desktop//test.txt");
        try {
            FileOutputStream in=new FileOutputStream(file);
            //String data="zgy_hello world";
            byte data[]="zgy_hello world".getBytes();
            try {
                in.write(data);
                //in.close();
            } catch (IOException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
            
        } catch (FileNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }

        try {
            FileInputStream out=new FileInputStream(file);
            byte get[]=new byte[1024];
            try {
                int flag=out.read(get);
                System.out.println(new String(get,0,flag));
            } catch (IOException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }

        } catch (FileNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
}   
