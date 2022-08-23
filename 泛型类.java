class bank<T>
{
    private T run;
    public bank(T run)
    {
        this.run=run;
    }
    public T back()
    {
        return run;
    }
}
public class test {
    public static void main(String[] args) {
        bank<String>name=new bank<String>("中国银行");
        bank<String>time=new bank<String>("2021-11-27");
        //bank<int>number=new bank<int>(200);
        bank<Integer>number=new bank<Integer>(20020827);
        bank<Double>last=new bank<Double>(18002.20);
        System.out.println("银行："+name.back());
        System.out.println("时间："+time.back());
        System.out.println("卡号："+number.back());
        System.out.println("余额："+last.back());
        
    }
}
