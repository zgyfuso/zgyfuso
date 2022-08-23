import java.util.*;
public class test {
    public static void main(String[] args) throws Exception {
        char [][]map={{'-','-','-','-','-','-','-','-','-','-','1'},
                      {'-','-','-','-','-','-','-','-','-','-','2'},
                      {'-','-','-','-','-','-','-','-','-','-','3'},
                      {'-','-','-','-','-','-','-','-','-','-','4'},
                      {'-','-','-','-','-','-','-','-','-','-','5'},
                      {'-','-','-','-','-','-','-','-','-','-','6'},
                      {'-','-','-','-','-','-','-','-','-','-','7'},
                      {'-','-','-','-','-','-','-','-','-','-','8'},
                      {'-','-','-','-','-','-','-','-','-','-','9'},
                      {'-','-','-','-','-','-','-','-','-','-','十'},
                      {'1','2','3','4','5','6','7','8','9','十',' '}};
        test t=new test();
        //t.show(map);
        t.run(map);
    }
    public void run(char[][]map)
    {
        Scanner input = new Scanner(System.in);
        int i=0;
        int x=0;
        int y=0;
        show(map);
        while(look(map))
        {
            
            System.out.println("人类玩家：");
            System.out.print("\tx:");
            x=input.nextInt();
            System.out.print("\ty:");
            y=input.nextInt();
            if(x<map.length&&y<map[0].length&&map[x-1][y-1]=='-')
            {
                map[x-1][y-1]='*';
            }
            else System.out.println("输入错误");
            System.out.println("\n\n\n\n\n\n\n\n\n\n\n");
            show(map);
            System.out.println("\n\n\n\n\n\n\n\n\n\n");
            System.out.println("二号玩家：");
            System.out.print("\tx:");
            x=input.nextInt();
            System.out.print("\ty:");
            y=input.nextInt();
            if(x<map.length&&y<map[0].length&&map[x-1][y-1]=='-')
            {
                map[x-1][y-1]='#';
            }
            System.out.println("\n\n\n\n\n\n\n\n\n\n\n");
            show(map);
            System.out.println("\n\n\n\n\n\n\n\n\n\n");
        }
        System.out.println("游戏结束");
    }
    public boolean look(char[][]map)
    {
        int flag=0;
        int flag_=0;
        //行判断
        for(int i=0;i<map.length;i++)
        {
            for(int j=0;j<map[0].length;j++)
            {
                if(map[i][j]=='*')
                {
                    flag++; //System.out.println(flag);
                    if(flag==5) return false;
                }
                else flag=0;
                if(map[i][j]=='#')
                {
                    flag_++;//System.out.println(flag_);
                    if(flag_==5) return false;
                }
                else flag_=0;
                //flag=0;
                // flag_=0;
            }
        }
        //列判断
        for(int i=0;i<map.length;i++)
        {
            for(int j=0;j<map[0].length;j++)
            {
                if(map[j][i]=='*')
                {
                    flag++; //System.out.println(flag);
                    if(flag==5) return false;
                }
                else flag=0;
                if(map[j][i]=='#')
                {
                    flag_++;//System.out.println(flag_);
                    if(flag_==5) return false;
                }
                else flag_=0;
            }
        }
        for(int n=4;n<map.length-4;n++)
        {
            for(int i=n,j=0;i>0;i--,j++)
        {
            // for(int j=0;j<=i;j++)
            // {
                if(map[i][j]=='*')
                {
                    flag++; //System.out.println(flag);
                    if(flag==5) return false;
                }
                else flag=0;
                if(map[i][j]=='#')
                {
                    flag_++;//System.out.println(flag_);
                    if(flag_==5) return false;
                }
                else flag_=0;
            //}
        }
        }
        for(int n=4;n<map.length-4;n++)
        {
            for(int i=n,j=0;i>0;i--,j++)
        {
            // for(int j=0;j<=i;j++)
            // {
                if(map[i][j]=='*')
                {
                    flag++; //System.out.println(flag);
                    if(flag==5) return false;
                }
                else flag=0;
                if(map[i][j]=='#')
                {
                    flag_++;//System.out.println(flag_);
                    if(flag_==5) return false;
                }
                else flag_=0;
            //}
        }
        }
        for(int n=4;n<map.length-4;n++)
        {
            for(int i=n,j=map.length-1;i>0;i--,j--)
        {
            // for(int j=0;j<=i;j++)
            // {
                if(map[i][j]=='*')
                {
                    flag++; //System.out.println(flag);
                    if(flag==5) return false;
                }
                else flag=0;
                if(map[i][j]=='#')
                {
                    flag_++;//System.out.println(flag_);
                    if(flag_==5) return false;
                }
                else flag_=0;
            //}
        }
        }
        // if(flag==5) return false;
        // else return true;
        return true;
    }
    public void show(char[][]map)
    {
        System.out.println("\n\n\n\n");
        for(int i=0;i<map.length;i++)
        {
            System.out.print("\t\t\t\t");
            for(int j=0;j<map[0].length;j++)
            {
                System.out.print(map[i][j]+" ");
            }
            System.out.println();
        }
    }
}
