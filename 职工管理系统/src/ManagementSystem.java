import java.util.Scanner;
import java.util.Vector;

public class ManagementSystem {
    //初始化
    Vector<Developer>developers=new Vector<>();
    Vector<Manager>managers=new Vector<>();
    public static void main(String[] args) {
        ManagementSystem ms=new ManagementSystem();
        Manager manager;
        Developer developer;
        boolean flag=true;

        while (flag) {
            System.out.println("        管理系统");
            System.out.println("********************");
            System.out.println("****    1 添加   ****");
            System.out.println("****    2 删除   ****");
            System.out.println("****    3 修改   ****");
            System.out.println("****    4 查询   ****");
            System.out.println("****    5 统计   ****");
            System.out.println("****    6 退出   ****");
            System.out.println("********************");
            Scanner scanner = new Scanner(System.in);
            System.out.print("输入你的选择:");
            int get = scanner.nextInt();
            switch (get) {
                case 1:
                    switch (ms.judge()) {
                        case 1:
                            developer=ms.addDeveloper();
                            ms.developers.add(developer);
                            break;
                        case 2:
                            manager=ms.addManager();
                            ms.managers.add(manager);
                            break;
                        default:
                            System.out.println("输入错误");
                    }
                    break;
                case 2:
                    ms.delete();
                    break;
                case 3:
                    ms.modify();
                    break;
                case 4:
                    ms.inquiry();
                    break;
                case 5:
                    ms.statistics();
                    break;
                case 6:
                    flag=false;
                    break;
                default:
                    System.out.println("输入错误！");
                    break;
            }
        }
    }
    private int judge() {
        Scanner scanner=new Scanner(System.in);
        System.out.println("** 1 开发人员相关 **");
        System.out.println("** 2 管理人员相关 **");
        System.out.print("输入：");
        switch (scanner.nextInt()) {
            case 1:
                return 1;
            case 2:
                return 2;
            default:
                return 1;
        }
    }
    private Manager addManager() {
        Scanner scanner=new Scanner(System.in);
        Manager manager=new Manager();
        addManager(scanner, manager);
        return manager;
    }

    private Developer addDeveloper() {
        Scanner scanner=new Scanner(System.in);
        Developer developer=new Developer();
        getDeveloper(scanner, developer);
        return developer;
    }

    public void delete() {
        int flag=judge();
        Scanner scanner =new Scanner(System.in);
        String number;
        switch (flag) {
            case 1:
                outDeveloper();
                System.out.print("输入要删除序号：");
                number=scanner.nextLine();
                for (Developer developer : developers) {
                    if (developer.getNumber().equals(number)) {
                        developers.removeElement(developer);
                        break;
                    }
                }
                System.out.println("删除成功");
                break;
            case 2:
                outManager();
                System.out.print("输入要删除的序号：");
                number= scanner.nextLine();
                for (Developer developer : developers) {
                    if (developer.getNumber().equals(number)) {
                        developers.removeElement(developer);
                        break;
                    }
                }
                System.out.println("删除成功");
                break;
        }
    }

    public void modify() {
        int flag=judge();
        Scanner scanner =new Scanner(System.in);
        String number;
        switch (flag) {
            case 1:
                outDeveloper();
                System.out.print("输入序号：");
                System.out.println("开始修改");
                number=scanner.nextLine();
                for (Developer developer : developers) {
                    if (developer.getNumber().equals(number)) {
                        getDeveloper(scanner, developer);
                    }
                }
                break;
            case 2:
                outManager();
                System.out.print("输入序号");
                System.out.println("开始修改");
                number= scanner.nextLine();
                for (Manager manager : managers) {
                    if (manager.getNumber().equals(number)) {
                        addManager(scanner, manager);
                    }
                }
                break;
        }
    }

    private void addManager(Scanner scanner, Manager manager) {
        System.out.print("输入编号：");
        manager.setNumber(scanner.nextLine());
        System.out.print("输入姓名：");
        manager.setName(scanner.nextLine());
        System.out.print("输入出生年月：");
        manager.setBirtaday(scanner.nextLine());
        System.out.print("输入职位：");
        manager.setPosition(scanner.nextLine());
    }

    private void getDeveloper(Scanner scanner, Developer developer) {
        System.out.print("输入编号：");
        developer.setNumber(scanner.nextLine());
        System.out.print("输入姓名：");
        developer.setName(scanner.nextLine());
        System.out.print("输入出生年月：");
        developer.setBirtaday(scanner.nextLine());
        System.out.print("输入部门：");
        developer.setDepartment(scanner.nextLine());
        System.out.print("输入岗位：");
        developer.setPost(scanner.nextLine());
    }

    public void outDeveloper() {
        for (Developer developer : developers) {
            System.out.println("***************************");
            System.out.print("姓名："+developer.getName()+"        ");
            System.out.println("工号："+developer.getNumber());
            System.out.print("生日："+developer.getBirtaday()+"        ");
            System.out.println("职位"+developer.getPost());
            System.out.println("***************************\n");
        }
    }

    public void outManager() {
        for (Manager manager : managers) {
            System.out.println("***************************");
            System.out.print("姓名："+manager.getName()+"        ");
            System.out.println("工号："+manager.getNumber());
            System.out.print("生日："+manager.getBirtaday()+"        ");
            System.out.println("职位"+manager.getPosition());
            System.out.println("***************************\n");
        }
    }
    public void inquiry() {
        int flag=judge();
        switch (flag) {
            case 1:
                outDeveloper();
                break;
            case 2:
                outManager();
                break;
        }
    }

    public void statistics() {
        Vector<Statistic>statistics=new Vector<>();
        //待完善
        switch (judge()) {
            case 1:
                for (int i = 0; i < developers.size(); i++) {
                    Developer developer = new Developer();
//                    if(statistics.)
                        if ((statistics.get(i).getName().equals(developer.getPost()))) {
                            statistics.get(i).setNumber(statistics.get(i).getNumber() + 1);
                        } else {
                            statistics.add(new Statistic(developer.getPost(),1));
                        }
                }
                break;
            case 2:
                break;
        }
    }
}
//        System.out.println("1 架构");
//        System.out.println("2 设计");
//        System.out.println("3 前端");
//        System.out.println("4 后端");
//        System.out.print("输入：");
//        switch (scanner.nextInt()) {
//            case 1:
//                return Post.architecture;
//        }
//    }
//    public Vector<Person> add() {
//        Vector<Developer>developers=new Vector<>();
//        Vector<Manager>managers=new Vector<>();
//        developers=null;
//        managers=null;
//        boolean flag = true;
//        while (flag) {
//            Developer developer=new Developer();
//            Manager manager = new Manager();
//
//            System.out.println("******************");
//            System.out.println("** 1 添加开发人员 **");
//            System.out.println("** 2 添加管理人员 **");
//            System.out.println("** 3     退出    **");
//            System.out.println("******************");
//            Scanner scanner = new Scanner(System.in);
//            System.out.print("输入：");
//            int get=scanner.nextInt();
//            switch (get) {
//                case 1:
//                    System.out.print("\n编号：");
//
//                case 2:
//                case 3:
//                default:
//            }
//        }
//    }

