interface addable
{
    public void add();
}
interface reducible
{
    public void reduce();
}
interface changeable extends addable,reducible
{
    // int unit=30;
    // public void changeable(int unit)   只能声明
    // {
    //     this.unit=unit;
    // }

    //public void change();
}
class number implements changeable
{
    int unit=30;
    public void number(int unit)
    {
        this.unit=unit;
    }
    public void reduce()
    {
        unit-=30;
        System.out.println("减去人数成功:"+unit);
    }
    public void add()
    {
        unit+=30;
        System.out.println("添加人数成功:"+unit);
    }
}

public class test {
    public static void main(String[] args) throws Exception {
        number n=new number();
        n.add();
        n.add();
        n.reduce();
    }
}
