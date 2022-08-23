import java.util.Random;
public class Test3 {
    public static void main(String[] args) {
        Random r=new Random();
        int []arr=new int [9];
        int max,min,sum;
        double av;
        System.out.println("以下是随机数组");
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=r.nextInt(89)+10;
            System.out.print(arr[i]);
            System.out.print("  ");
        }
        System.out.println();
        max=max(arr);
        System.out.print("最大值是：");
        System.out.println(max);

        System.out.println();
        min=min(arr);
        System.out.print("最小值是：");
        System.out.println(min);

        System.out.println();
        sum=sum(arr);
        System.out.print("和值是：");
        System.out.println(sum);

        System.out.println();
        av=av(arr);
        System.out.print("平均值是：");
        System.out.println(av);
    }
    public static int max(int[]arr)
    {
        int max=0;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
    public static int min(int[]arr)
    {
        int min=99;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]<min){
                min=arr[i];
            }
        }
        return min;
    }
    public static int sum(int[]arr)
    {
        int sum=0;
        for(int i=0;i<arr.length;i++)
        {
            sum+=arr[i];
        }
        return sum;
    }

    public static double av(int[]arr)
    {
        int sum=0;
        for(int i=0;i<arr.length;i++)
        {
            sum+=arr[i];
        }
        return sum/arr.length;
    }
    
}
