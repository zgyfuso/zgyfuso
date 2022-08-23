import java.util.function.Function;

public class test {
    public static void main(String[] args) {
        // Integer []array={192,12,4,0};
        // //Function<T,R> f=(n)->{return n};
        // Function<Integer[],String>f=(n)->{//第一个参数传入类型，第二个参数返回值类型
        //     StringBuilder s=new StringBuilder();
        //     for(Object i:n)
        //     {
        //         s.append(i+".");
        //     }
        //     s.deleteCharAt(s.length()-1);
        //     return s.toString();
        // };
        // System.out.println(f.apply(array));

        // Function<String,String>f=Function.identity();
        // String result=f.apply("hello world");//传进去一个值，返回他本身
        // System.out.println(result);


        // //comprose 方法
        // Function<String,String>f=Function.identity();
        // // String result=f.apply("hello world");//传进去一个值，返回他本身
        // // System.out.println(result);
        // Function<String,String>before=(n)->{
        //     return "zgy: "+n;
        // };
        // String result=f.compose(before).apply("hello world");
        // System.out.println(result);

        Function<String,String>f=Function.identity();
        Function<String,String>after=(n)->{
            return n+"\ncopy that";
        };
        String result=f.andThen(after).apply("hello world");
        System.out.println(result);
    }
}


