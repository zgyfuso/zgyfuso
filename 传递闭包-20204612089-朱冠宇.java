import java.util.Scanner;
import java.util.function.ObjDoubleConsumer;
import javax.xml.transform.stream.StreamSource;    
public class test {
     
    public static void main(String[] args) throws Exception {
        test t=new test();
       int size;
       Scanner sc=new Scanner(System.in);

       System.out.print("输入你想创建的数组大小: ");
        size=sc.nextInt();
        char[]atom=new char[size];

        char[][]figure=new char[size][size];//关键初始化
        char[][]less_figure=new char[size-1][size];
        //System.out.println("less_figure.length: "+less_figure.length);
        
        for(int i=0;i<size;i++)
        {
            System.out.print(i+1+": ");
            atom[i]=sc.next().charAt(0);
            //System.out.println();
        }
        // for(int i=0;i<size;i++)
        // {
        //     System.out.println(atom[i]);
        // }
        System.out.println("输入关系的个数");
        int size_;
        size_=sc.nextInt();
        char[][]relation=new char[size_][2];
        for(int i=0;i<size_;i++)
        {
            System.out.println("第"+(i+1)+"组: ");
            System.out.print("     x: ");
            relation[i][0]=sc.next().charAt(0);
            System.out.print("     y: ");
            relation[i][1]=sc.next().charAt(0);
        }
        if(t.check(atom,relation))
        {
           t.init_figure(atom, relation,figure);
           //t.show(atom, figure);
           //System.out.println("add_line test:");
           //t.add_line(figure, 1,3);
           //t.show(atom, figure);
        //    System.out.println("less_line test:");
        //     t.less_line(figure,less_figure, size, 0);
        System.out.println("传递闭包矩阵为：");
            t.run(figure, less_figure);
        }
        else{
            System.out.println("关系内出现了不存在于预置元素的元素");
        }
        // for(int i=0;i<size_;i++)
        // {
        //    for(int j=0;j<2;j++)
        //    {
        //     System.out.println(relation[i][j]);
        //    }
        // }
    }
    public void run(char[][]figure,char[][]less_figure)
    {
        for(int i=0;i<figure.length;i++)
        {
            //show(figure,figure.length);
            less_line(figure, less_figure,figure.length,i);
            for(int j=0;j<less_figure.length;j++)
            {
                if(less_figure[j][i]=='1')
                {
                    add_line(figure,i, j);
                }
            }
        }
        show(figure,figure.length);
    }
    public void less_line(char[][]figure,char[][]less_figure,int size,int flag)
    {
        flag-=1;
        // for(int i=0,t=0;t<size-1;i++,t++)
        // {
        //     if(i!=flag)
        //     {
        //         for(int j=0;j<size;j++)
        //         {
        //             // {
        //             //     i++;
        //             //     //if(i>=size) i--;
        //             // }
        //             less_figure[t][j]=figure[i][j];
        //         }
        //     }
        //     else {
        //         t--;i--;
        //     }
        // }
        for(int i=0,t=0;t<(less_figure.length);i++,t++)
        {
            if(i!=flag)
            {
                for(int j=0;j<size;j++)
                {
                    less_figure[t][j]=figure[i][j];
                }
            }
            else{
                t--;
            }
        }
        //show(less_figure, less_figure.length);
        /*
        for(int i=0;i<less_figure.length;i++)
        {
            for(int j=0;j<(less_figure.length+1);j++)
            {
                System.out.print(less_figure[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println("\n");
        */
        /*
        for(int k=0;k<(less_figure.length-1);k++)
            {
                System.out.println("binggo");
                for(int j=0;j<less_figure.length;j++)
                {
                    System.out.print(less_figure[k][j]+" ");
                }
                System.out.println();
            }
            */
    }
    public void show(char[][]array,int flag)
    {
        //System.out.println("binggo");
        for(int i=0;i<flag;i++)
        {
            for(int j=0;j<flag;j++)
            {
                System.out.print(array[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println("\n");
    }
    public void add_line(char[][]figure,int first,int second)
    {
        //first-=1;second-=1;
        for(int i=0;i<figure.length;i++)
        {
            if(figure[second][i]=='0'&&figure[first][i]=='1')
            {
                // figure[second][i]+=figure[first][i];
                figure[second][i]='1';
            }
        }
    }
    public void show(char[] atom,char[][]figure)
    {
        for(int i=0;i<atom.length;i++)
        {
            for(int j=0;j<atom.length;j++)
            {
               System.out.print(figure[i][j]+" ");
            }
            System.out.println();
        }
    }
    public void init_figure(char[] atom,char[][]relation,char[][]figure)
    {
        for(int i=0;i<atom.length;i++)
        {
            for(int j=0;j<atom.length;j++)
            {
                figure[i][j]='0';
            }
        }
        int temp=0,temp_=0,flag=0;
        for(int i=0;i<relation.length;i++)
        {
            for(int j=0;j<2;j++)
            {
                for(int l=0;l<atom.length;l++)
                {
                    if(relation[i][j]==atom[l])
                    {
                        if(j==0) 
                        {
                            temp=l;
                            //System.out.print(l+" ");
                            flag++;
                        }
                        if(j==1) {
                            temp_=l;
                            //System.out.println(l);
                            flag++;
                        }
                    }
                    if(flag==2/*(temp!=0&&temp_==0)||temp==0&&temp_!=0*/)
                    {
                         //System.out.println("坐标:"+temp+" "+temp_);
                        figure[temp][temp_]='1';
                        flag=0;
                    }
                }
                //temp=temp_=0;
            }
        }
    }
    public boolean check(char[] atom,char[][]relation)
    {
        int flag=1,flag_=0;
        for(int i=0;i<relation.length;i++)
        {
            for(int j=0;j<2;j++)
            {
                flag_=0;
                //System.out.println(relation[i][j]);
                for(int l=0;l<atom.length;l++)
                {
                    //System.out.println(atom[l]);
                    if(relation[i][j]!=atom[l])
                    {
                       flag_++;
                    }
                }
                if(flag_==atom.length) flag=0;
            }
        }
        if(flag==0) return false;
        else return true;
    }
}
