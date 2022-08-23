import java.io.*;
//import java.math.*;
public class test {
    public static void main(String[] args) {
        //System.out.println((double)Math.PI);
        File file=new File("C://Users//Lenovo//Desktop//text.txt");
        try {
            FileOutputStream in=new FileOutputStream(file);
            DataOutputStream in_=new DataOutputStream(in);
            //in_.writeUTF(Math.PI);
            try {
                in_.writeDouble(Math.PI);
                System.out.println("binggo");
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
            DataInputStream out_=new DataInputStream(out);
            try {
                double result=out_.readDouble();
                System.out.println(result);
                System.out.println("读取完成");
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
