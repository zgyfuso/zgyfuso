abstract class animal
{
    abstract void eat();
}
public class test {
    public static void main(String[] args) throws Exception {
        animal a=new animal() {
            void eat()//此处类型于虚函数同类
            {
                System.out.println("猫吃鱼，狗吃屎");
            }
        };
        a.eat();
    }
}
