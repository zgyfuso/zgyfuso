import java.io.*;
public class test {
    public static void main(String[] args) {
        File file=new File("C://Users//Lenovo//Desktop//test.txt");
        try {
            FileOutputStream init=new FileOutputStream(file);
            DataOutputStream in=new DataOutputStream(init);
            byte data[]="zgy hello /n".getBytes();
            double d_number=10086;
            int i_number=10;
            try {
                in.write(data);
                in.writeDouble(d_number);
                in.writeInt(i_number);
                System.out.println("binggo");
            } catch (IOException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
        } catch (FileNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }

        FileInputStream out;
        try {
            out = new FileInputStream(file);
            DataInputStream o=new DataInputStream(out);
            try {
                System.out.println(o.readByte());
                //................
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
