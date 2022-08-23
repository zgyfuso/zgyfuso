enum colorful
{
    red,orange,yellow,green,blue,purple
}

public class test {
    public static void main(String[] args) {
        color_out(colorful.red);
    }
    public static void color_out(colorful c)
    {
        switch(c){
            case red:
            System.out.println(colorful.red);
            //剩下的我懒得写了
        }
    }
}
