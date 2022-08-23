public class Test2 {
    public static void main(String[] args) {
        int []arr={43,32,76,-98,0,64,33,21,37,99};
        sort(arr);
        System.out.println("内容为：");
        for(int i:arr)
        {
            System.out.print(i);
            System.out.print("  ");
        }
    }
    public static void sort(int[]arr)
    {
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr.length-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        System.out.println("排序完成");
    }
}
