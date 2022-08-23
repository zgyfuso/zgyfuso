import java.util.Scanner;
import java.util.Arrays;
public class test {
    public static void main(String[] args) throws Exception {
        int [][]array={{1,2,3},{4,5,6},{7,8,9}};
        test t=new test();
        t.line(array);
        t.hang(array);
        t.x(array);
    }
    public void line(int[][]array)
    {
        int temp_1,temp_2,temp_3;
        temp_1=temp_2=temp_3=0;
        for(int i=0;i<3;i++)
        {
            temp_1+=array[0][i];
            temp_2+=array[1][i];
            temp_3+=array[2][i];
        }
        if(temp_1==temp_2&&temp_2==temp_3)
        {
            System.out.println("每行相等");
        }
        else{
            System.out.println("每行不相等");
        }

    }
    public void hang(int[][]array)
    {
        int temp_1,temp_2,temp_3;
        temp_1=temp_2=temp_3=0;
        for(int i=0;i<3;i++)
        {
            temp_1+=array[i][0];
            temp_2+=array[i][1];
            temp_3+=array[i][2];
        }
        if(temp_1==temp_2&&temp_2==temp_3)
        {
            System.out.println("每列相等");
        }
        else{
            System.out.println("每列不相等");
        }

    }
    public void x(int[][]array)
    {
        int temp_1,temp_2;
        temp_1=temp_2=0;
        for(int i=0;i<3;i++)
        {
            temp_1+=array[i][i];
        }
        for(int i=array.length-1;i>0;i--)
        {
            temp_2=array[i][i];
        }
        if(temp_1==temp_2)
        {
            System.out.println("对角线相等");
        }
        else{
            System.out.println("对角线不相等");
        }
    }
}
