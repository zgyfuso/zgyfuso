import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

import javax.swing.plaf.synth.SynthListUI;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Random;
import java.lang.Math;
import java.sql.Array;

public class test {
    public static void main(String[] args) throws Exception {
        test t = new test();
        int array[] = { 1, 6, 4, 9, 3 };
        // t.sort_bubble(array);
        // t.sort_direct(array);
        // buy_coco c=new buy_coco();
        // c.sell();
        // 多态
        // draw d=new draw();
        // d.draw_(new person());
        // d.draw_(new student());
        // d.draw_(new teacher());
        // draw.draw_(new student());
        // 接口
        // new red().shine();
        // new green().shine();

        // List<String> list = new ArrayList<>();
        // list.add("西游记");
        // list.add("红楼梦");
        // list.add("三国演义");
        // // list.sort();
        // Iterator<String> it=list.iterator();
        // while(it.hasNext())
        // {
        //     String str=it.next();
        //     System.out.println(str);
        // }

        // Set<String>set=new HashSet<>();
        // set.add("西游记");
        // set.add("红楼梦");
        // set.add("三国演义");
        // Iterator<String> iterator=set.iterator();
        // while(iterator.hasNext())
        // {
        //     String str=iterator.next();
        //     System.out.println(str);
        // }
        // //天然排序

        // Set<String>set=new TreeSet<>();
        // set.add("bbb");
        // set.add("aaa");
        // set.add("ccc");
        // Iterator iterator=set.iterator();
        // while(iterator.hasNext())
        // {
        //     System.out.println(iterator.next());
        // }

        // Random random=new Random();
        // Set<Integer>set=new HashSet<>();
        // for(int i=0;i<100;i++)
        // {
        //     set.add(random.nextInt(20));
        // }
        // Iterator iterator=set.iterator();
        // System.out.println("输出：");
        // int flag=0;
        // while(iterator.hasNext())
        // {
        //     flag++;
        //     System.out.print(iterator.next()+"  ");
        //     if(flag%10==0) System.out.println();
        // }

        // Map<String,String>map=new HashMap<>();
        // map.put("智多星", "吴用");
        // map.put("呼保义", "宋江");
        // Set<String>set=map.keySet();
        // Iterator iterator=set.iterator();
        // System.out.println("关键值：");
        // while(iterator.hasNext())
        // {
        //     System.out.print(iterator.next()+"  ");
        // }
        // Collection<String> collection=map.values();
        // iterator=collection.iterator();
        // System.out.println("\n值：           ");
        // while(iterator.hasNext())
        // {
        //     System.out.print(iterator.next()+"  ");
        // }

        // System.out.println("\n\n"+ map.get("智多星"));

    }

    public void sort_direct(int array[]) {
        int index;
        for (int i = 1; i < array.length; i++) {
            index = 0;
            for (int j = 1; j <= array.length - i; j++) {
                if (array[index] < array[j])// 升序>，降序<
                {
                    index = j;
                }
                int temp = array[index];
                array[index] = array[j];
                array[j] = temp;
            }
        }
        show_array(array);
    }

    public void sort_bubble(int[] array) {
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array.length - 1 - i; j++) {
                if (array[j] > array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
        show_array(array);
    }

    public void show_array(int[] array) {
        System.out.println("\narray:");
        for (int i : array) {
            System.out.print(i + "  ");
        }
    }

    public void array() {
        int array[];
        array = new int[10];
        array[2] = 2;
        System.out.println(array[2]);
        System.out.println();
        int array_[] = new int[20];
        System.out.println("填充前：");
        for (int i : array_) {
            System.out.print(i);
            System.out.print("  ");
        }
        System.out.println();
        Random random = new Random();
        // Arrays.fill(array_,0,array_.length,(int)(0+Math.random()*(10)));
        Arrays.fill(array_, 0, array_.length, random.nextInt(10) + 1);
        System.out.println("填充后：");
        for (int i : array_) {
            System.out.print(i + "  ");
        }

        int copy_array_[] = Arrays.copyOf(array_, 5);
        System.out.println("\n复制后：");
        for (int i : copy_array_) {
            System.out.print(i + "  ");
        }
    }
}

class demo {
    private String get_;

    public demo() {
        this.get_ = "我不爱你了";
    }

    public void test() {
        System.out.println("输入语句：");
        Scanner sc = new Scanner(System.in);
        String get = sc.next();
        // String temp="我不爱你了";
        if (get.equals(get_)) {
            System.out.println("\n那我以后乖点好了");
        }
    }
}

class buy_coco {
    private int ice = 0;

    public buy_coco() {
    }

    public buy_coco(int ice) {
        this.ice = ice;
    }

    public void sell() {
        System.out.println(ice);
    }
}

class person {
}

class teacher extends person {
}

class student extends person {
}

class draw {
    public static void draw_(person s) {

        if (s instanceof student) {
            System.out.println("学生要好好学习");
        } else if (s instanceof teacher) {
            System.out.println("老师要好好教书");
        } else if (s instanceof person) {
            System.out.println("每个人都要好好生活");
        } else {
            System.out.println("什么鬼");
        }
    }
}

interface colorful {
    public void shine();
}

class red implements colorful {
    public void shine() {
        System.out.println("我在发红光");
    }
}

class green implements colorful {
    public void shine() {
        System.out.println("我在发绿光");
    }
}
