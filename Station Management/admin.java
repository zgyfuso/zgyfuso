import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.Scanner;

public class admin {
    Scanner sc = new Scanner(System.in);
    public Collection collection = new ArrayList<>();
    public Collection getCollection() {
        return collection;
    }

    public void setCollection() {
        System.out.println("输入车次号");
        this.collection.add(sc.next());
    }

    public void change_number() {
        Scanner sc_=new Scanner(System.in);
        System.out.print("输入要修改的车次号：");
        String temp = sc_.nextLine();

        collection.remove(temp);
        System.out.print("\n输入要修改内容：");
        temp = sc_.nextLine();
        collection.add(temp);
        // else
        // {
        // System.out.println("要修改的车次不存在!");
        // }

    }

    public void show_number() {
        System.out.println("以下为车票");
        Iterator iterator = this.collection.iterator();// 获得迭代器
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }
        System.out.println("展示完毕\n\n");
    }

    public void delete_number() {
        Scanner sc=new Scanner(System.in);
        System.out.println("输入要删除的车次号");
        String temp = sc.nextLine();
        collection.remove(temp);
        System.out.println("删除" + temp + "成功");
    }
}
