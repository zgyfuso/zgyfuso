import java.util.Scanner;
import java.io.*;

public class test {
    // 重点笔记 int类型不能直接转换为char数组，应该先转为string再转换为char数组
    public static void main(String[] args) {
        int data;
        System.out.print("输入你的密码原文:");
        Scanner init = new Scanner(System.in);
        data = init.nextInt();
        int[]data_=change(data);
        file_in(data_);
        file_out(data_);
        
        // for(int i:data_)
        // {
        //     System.out.print(i);
        // }
    }
    static int[] change(int data)
    {
       
        
        char[] array;
        String temp;
        
        
        // System.out.println("*********************");
        // 第一种方法：s=i+""; //会产生两个String对象
        // 第二种方法：s=String.valueOf(i); //直接使用String类的静态方法，只产生一个对象
        temp = String.valueOf(data);
        int[] data_=new int[temp.length()];
        // System.out.println(array);
        array = temp.toCharArray();

        for (int i=0;i<array.length;) {
            // 先把c装成string类型
            String stringc = String.valueOf(array[i]);
            // string转成int
            data_[i] = Integer.parseInt(stringc);
            i++;
        }
        return data_;
    }

    static void file_in(int []data_)
    {
        File file=new File("C://Users//Lenovo//Desktop//text.txt");
        try {
            FileOutputStream in=new FileOutputStream(file);
            DataOutputStream in_=new DataOutputStream(in);
            for(int i:data_)
            {
                int temp=i*2+11;
                try {
                    in_.writeInt(temp);
                } catch (IOException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
            }
            System.out.println("输入完成");
        } catch (FileNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        FileInputStream out;
        try {
            out = new FileInputStream(file);
            DataInputStream out_=new DataInputStream(out);
            System.out.print("密文是：");
            try {
                System.out.println(out_.readInt());
            } catch (IOException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
        } catch (FileNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }        
    }

    static void file_out(int[]data_)
    {
        File file=new File("C://Users//Lenovo//Desktop//text.txt");
        FileInputStream out;
        try {
            System.out.print("读取完成：原文为：");
            for(int i=0;i<data_.length;i++)
            {
                out = new FileInputStream(file);
                DataInputStream out_=new DataInputStream(out);
                try {
                    int result=(out_.readInt()-11)/2;
                    System.out.print(result);
                } catch (IOException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
            }
        } catch (FileNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }       
    }
}
