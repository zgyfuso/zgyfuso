import java.security.SecurityPermission;

import javax.sql.rowset.spi.SyncResolver;

// enum WC
// {
//     man
// }
// enum WC_{
//     woman
// }
// public class test {
//     public static void main(String[] args) {
//         man_wc(WC.man);
//         woman_wc(WC_.woman);
//     }
//     public static void man_wc(WC w)
//     {
//         System.out.println("这是男厕所");
//     }
//     public static void woman_wc(WC_ w)
//     {
//         System.out.println("这是女厕所");

//     }
// }
class Toilet<T> {
	public void enter(T t) {
        System.out.println("binggo");
	}
}

class Male {
    public Male()
    {
        System.out.println("male");
    }
}

class Female {
    public Female()
    {
        System.out.println("female");
    }
}

public class test {
	public static void main(String[] args) {
		Toilet<Male> mansroom = new Toilet();
		Toilet<Female> womansroom = new Toilet();
        mansroom.enter(new Male());//先执行括号内
        womansroom.enter(new Female());
	}
}

