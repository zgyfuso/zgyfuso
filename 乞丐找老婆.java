import java.util.Scanner;

import javax.swing.plaf.synth.SynthSpinnerUI;

import java.awt.event.KeyEvent;
public class test {
    static int flag=1;
    public static void main(String[] args) throws Exception {
        test t=new test();
        char [][]map={{'H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H'},//0
                      {'H',' ',' ',' ','H',' ',' ',' ',' ',' ',' ','H',' ',' ',' ','H'},//1
                      {'H',' ',' ',' ','H',' ',' ',' ',' ',' ',' ','H','H',' ',' ','H'},//2
                      {'H',' ',' ',' ','H','H',' ',' ',' ',' ',' ','H','H',' ',' ','H'},//3
                      {'H',' ',' ',' ','H',' ',' ','H',' ',' ',' ','H','H',' ',' ','H'},//4
                      {'H',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','H','H',' ',' ','H'},//5
                      {'H',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','H',' ',' ','H'},//6
                      {'H',' ',' ',' ',' ',' ','H',' ',' ',' ',' ',' ',' ',' ',' ','H'},//7
                      {'H',' ',' ',' ',' ',' ','H',' ','H',' ',' ',' ',' ',' ',' ','H'},//8
                      {'H',' ',' ',' ','H',' ','H',' ','H',' ',' ',' ',' ',' ',' ','H'},//9
                      {'H',' ',' ',' ','H',' ',' ',' ',' ',' ','H',' ',' ',' ',' ','H'},//10
                      {'H',' ',' ',' ','H',' ',' ',' ','H',' ','H','H','H',' ',' ','H'},//11
                      {'H',' ',' ',' ','H',' ',' ',' ','H',' ',' ',' ','H',' ',' ','H'},//12
                      {'H',' ',' ',' ','H',' ',' ',' ','H',' ',' ',' ','H',' ',' ','H'},//13
                      {'H',' ',' ','H','H',' ',' ',' ','H',' ',' ',' ','H',' ',' ','H'},//14
                      {'H',' ','H','H','H',' ',' ',' ','H',' ',' ',' ','H',' ',' ','H'},//15
                      {'H','H','H','H','H','H','H','H','H','H','H','H','H','H','H','H'},};//16
                    //  0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15
        // int hang=map[0].length;
        // int lie=map.length;
        //t.show(map);

         t.init(map);
        //  while(flag==0)
        //  {
        //     t.run(map);
        //     t.show(map);
        //  }
        t.show(map);
        t.run(map);
        
       
    }
    public void show(char[][]map)
    {
        
        for(int i=0;i<map.length;i++)
        {
            System.out.print("\t\t\t");
            for(int j=0;j<map[0].length;j++)
            {
                System.out.print(map[i][j]+" ");
            }
            System.out.println();
        }
    }
    public void init(char[][]map)
    {
        map[2][2]='*';
        map[14][14]='!';//此处与59，60 同步修改
    }
    public void run(char[][]map)
    {
        char get;
        int temp_x=2,temp_y=2;
        int last_x=14,last_y=14;
        Scanner sc =new Scanner(System.in);
        //System.out.println(get);
        while(flag==1)
        {
            do{
                String x =sc.next();
                get = x.charAt(0);
               //System.out.println("输入错误"); 
            }while(get!='a'&&get!='w'&&get!='s'&&get!='d');
            //System.out.println("binggo");
            switch(get)
            {
                case'w':
                    map[temp_x][temp_y]=' ';
                    map[temp_x-1][temp_y]='*';
                    temp_x=temp_x-1;
                    break;
                case's':
                    map[temp_x][temp_y]=' ';
                    map[temp_x+1][temp_y]='*';
                    temp_x=temp_x+1;
                    break;
                case'a':
                    map[temp_x][temp_y]=' ';
                    map[temp_x][temp_y-1]='*';
                    temp_y=temp_y-1;
                    break;
                case'd':
                    map[temp_x][temp_y]=' ';
                    map[temp_x][temp_y+1]='*';
                    temp_y=temp_y+1;
                    break;
            }
            System.out.println("\n\n\n\n\n\n\n\n\n\n");
            show(map);
            System.out.println("\n\n\n\n\n\n");
            if(temp_x==last_x&&temp_y==last_y)
            {
                System.out.println("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                System.out.println("                         *******************************************");
                System.out.println("                                        你找到你老婆了             ");
                System.out.println("                         *******************************************");
                System.out.println("\n\n\n\n\n\n\n\n\n\n");
            }
            if(temp_x==0||temp_x==map.length-1||temp_y==0||temp_y==map[0].length-1)
            {
                flag=0;
                System.out.println("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                System.out.println("                         *******************************************");
                System.out.println("                                        你老婆和别人跑了             ");
                System.out.println("                         *******************************************");
                System.out.println("\n\n\n\n\n\n\n\n\n\n");
 
            }
        }
    }
}
