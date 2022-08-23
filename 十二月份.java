enum mouth{
January,february,March,April,May,June,July ,August ,September,October,November,December
}
public class test {
    public static void main(String[]args){
        //System.out.println(mouth.March);
        mouth[]array=mouth.values();
        // for (int i = 0; i < array.length; i++) {
        //     System.out.println(array[i]);
        // }
        for(Object i:array)
        {
            System.out.println(i);
        }
    }
}
