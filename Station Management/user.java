import java.sql.ShardingKey;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.Scanner;

public class user {
    Scanner scanner = new Scanner(System.in);
    String temp;
    private admin a = new admin();
    private Collection collection =new ArrayList<>();
    

    public void init_collection() {
        this.collection = a.getCollection();
    }

    public void setCollection() {
        System.out.print("输入购买车次：");
        temp = scanner.nextLine();
        // scanner.nextInt();
        collection.add(temp);
        System.out.println("购买成功");
    }

    public void delete_number() {
        System.out.print("输入想退票次:");
        temp = scanner.nextLine();
        collection.remove(temp);
        System.out.println("退票成功");
    }

    public void show_number() {
        System.out.println("展示已购票：");
        Iterator iterator = collection.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }
        System.out.println("展示完毕");
    }

    public void show_can_number() {
        Iterator iterator = collection.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }
        System.out.println("展示完毕");
    }
}