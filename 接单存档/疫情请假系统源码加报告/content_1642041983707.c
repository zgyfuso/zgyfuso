#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 100
#define SN 100
#define reps int ii;for(ii=0;ii<admin.stu_len;ii++)
#define repl int l;for(l=0;l<len;l++)
/*
admin   管理员
hea     每日健康
test    核酸检测
ino     疫苗
lea     离校申请
stu     学生
*/


typedef struct{
    int id;
    int stu_len;
    char pw[20];

}Admin;
Admin admin;
typedef struct{
    int id;
    char t[20];
    float mor;
    float noo;
    float eve;
    char cou[5];
    char fev[5];
}Hea;
typedef struct{
    int id;
    char t[20];
    char addr[20*5];
    char g[20];
}Test;
typedef struct{
    int id;
    int t_id;
    char t[20];
    char addr[20*5];
    char ino_id[20];
}Ino;
typedef struct{
    int id;
    char rea[20*5];
    char lt[20];
    char rt[20];
    char tra[20];
    int sta;
    char ide[20*5];
}Lea;

typedef struct{
    int id;
    char pw[20];
    char name[20];
    char tel[20];
    char email[20];
    char fac[20];
    char cla[20];
    char addr[20*5];
    int heal,testl,inol,leal;
    Hea hea[N];
    Test test[N];
    Ino ino[N];
    Lea lea[N];

}Stu;
Stu stu[SN];

time_t lt;

void init(){
    FILE *f=fopen("data","rb");
    if(!f){
        int i;
        admin.stu_len=0;
        for(i=0;i<SN;i++){
            stu[i].id=-1;
            stu[i].heal=0;
            stu[i].testl=0;
            stu[i].inol=0;
            stu[i].leal=0;
        }
        printf("尚未注册管理员，输入管理员账号：");
        scanf("%d",&admin.id);
        printf("输入管理员密码：");
        scanf("%s",admin.pw);
        printf("管理员注册成功\n");
        return;
    }
    fread(&admin,sizeof(Admin),1,f);
    fread(stu,sizeof(Stu),SN,f);
    fclose(f);
}

void admin_modify_add(){
    int id;
    int loc=admin.stu_len++;
    char pw[20];
    printf("请输入要增加的学生的id：");
    scanf("%d",&id);
    printf("请输入 %d 的密码：",id);
    scanf("%s",pw);
    stu[loc].id=id;
    strcpy(stu[loc].pw,pw);
    printf("添加成功，请通知 %d 自行修改个人信息\n",id);
}
void admin_modify_del(){
    int id;
    int flag=0;
    printf("请输入要删除的学生的id：");
    scanf("%d",&id);
    reps{
        if(stu[ii].id==id){
            flag=1;
            admin.stu_len--;
        }
        if(flag)
            stu[ii]=stu[ii+1];
    }
    if(!flag){
        printf("没有 %d 这个学生\n",id);
        return;
    }
    printf("%d 删除成功\n",id);
}
void admin_modify(){
    printf("\n"
    "----------------\n"
    "1、添加\n"
    "2、删除\n"
    "----------------\n"
    "\n");
    int n;
    scanf("%d",&n);
    switch(n){
    case 1:admin_modify_add();
        break;
    case 2:admin_modify_del();
        break;
    }
}
void admin_all_1(){
    reps{
        int len;
        printf("学号: %d 姓名：%s\n",stu[ii].id,stu[ii].name);
        len=stu[ii].heal;
        repl{
            printf("ID：%-5d TIME:%-10s",stu[ii].hea[l].id,stu[ii].hea[l].t);
            printf("早：%-5.1f中：%-5.1f晚：%-5.1f",stu[ii].hea[l].mor,stu[ii].hea[l].noo,stu[ii].hea[l].eve);
            printf("是否咳嗽：%s 是否发烧：%s\n",stu[ii].hea[l].cou,stu[ii].hea[l].fev);
        }
        printf("------------------------------------------------------\n");
    }
}
void admin_all_2(){
    reps{
        int len;
        printf("学号: %d 姓名：%s\n",stu[ii].id,stu[ii].name);
        len=stu[ii].testl;
        repl{
            printf("ID：%-5d TIME:%-10s",stu[ii].test[l].id,stu[ii].test[l].t);
            printf("检测地点：%s 检测结果：%s\n",stu[ii].test[l].addr,stu[ii].test[l].g);
        }
        printf("------------------------------------------------------\n");
    }
}
void admin_all_3(){
    reps{
        int len;
        printf("学号: %d 姓名：%s\n",stu[ii].id,stu[ii].name);
        len=stu[ii].inol;
        repl{
            printf("ID：%-5d TIME:%-10s 接种次数序号:%d ",stu[ii].ino[l].id,stu[ii].ino[l].t,stu[ii].ino[l].t_id);
            printf("检测地点：%s 疫苗型号：%s\n",stu[ii].ino[l].addr,stu[ii].ino[l].ino_id);
        }
        printf("------------------------------------------------------\n");
    }
}
void admin_all_4(){
    reps{
        int len;
        printf("学号: %d 姓名：%s\n",stu[ii].id,stu[ii].name);
        len=stu[ii].inol;
        repl{
            printf("ID：%-5d 离校原因:%s ",stu[ii].lea[l].id,stu[ii].lea[l].rea);
            printf("离校时间：%s ",stu[ii].lea[l].lt);
            printf("返校时间：%s ",stu[ii].lea[l].rt);
            printf("行程轨迹：%s ",stu[ii].lea[l].tra);
            if(stu[ii].lea[l].sta==1)
                printf("审核状态：已审核 ");
            else
                printf("审核状态：未审核 ");

            printf("审核意见：%s ",stu[ii].lea[l].ide);
        }
        printf("------------------------------------------------------\n");
    }
}
void admin_all(){
    printf("\n"
    "----------------\n"
    "1、每日健康记录\n"
    "2、核酸检测记录\n"
    "3、疫苗接种记录\n"
    "4、离校申请记录\n"
    "----------------\n"
    "\n");
    int n;
    scanf("%d",&n);
    switch(n){
    case 1:admin_all_1();
        break;
    case 2:admin_all_2();
        break;
    case 3:admin_all_3();
        break;
    case 4:admin_all_4();
        break;
    }
}
void admin_query_1(){
    int flag=1;
    reps{
        int len;
        len=stu[ii].heal;
        repl{
            if(stu[ii].hea[l].mor>37.3||
               stu[ii].hea[l].noo>37.3||
               stu[ii].hea[l].eve>37.3){
                    if(flag){
                        printf("体温大于37.3的学生：\n");
                        flag=0;
                    }
                    printf("学号: %d 姓名：%s\n",stu[ii].id,stu[ii].name);
                    break;
               }
        }
    }
    if(flag)
        printf("没有体温大于37.3的学生\n");
}
void admin_query_2(){
    int flag=1;
    reps{
        if(stu[ii].inol<2){
            if(flag){
                printf("疫苗接种次数小于2的学生：\n");
                flag=0;
            }
            printf("学号: %d 姓名：%s\n",stu[ii].id,stu[ii].name);
        }
    }
    if(flag)
        printf("没有疫苗接种次数小于2的学生\n");
}
void admin_query_3(){
    int flag=1;
    reps{
        if(stu[ii].inol>3){
            if(flag){
                printf("离校申请次数大于3的学生：\n");
                flag=0;
            }
            printf("学号: %d 姓名：%s\n",stu[ii].id,stu[ii].name);
        }
    }
    if(flag)
        printf("没有离校申请次数大于3的学生\n");
}
void admin_query(){
    printf("\n"
    "----------------\n"
    "1、是否有体温异常（>37.3）\n"
    "2、接种疫苗<2\n"
    "3、离校申请次数>3\n"
    "----------------\n"
    "\n");
    int n;
    scanf("%d",&n);
    switch(n){
    case 1:admin_query_1();
        break;
    case 2:admin_query_2();
        break;
    case 3:admin_query_3();
        break;
    }
}
void admin_analyze_1(){
    int ans=0;
    reps{
        if(stu[ii].testl<5){
            ans++;
        }
    }
    printf("核酸检测<5人数：%d\n",ans);
}
void admin_analyze_2(){
    int ans=0;
    reps{
        if(stu[ii].inol<2){
            ans++;
        }
    }
    printf("接种疫苗<2人数：%d\n",ans);
}
void admin_analyze_3(){
    int ans=0;
    reps{
        if(stu[ii].leal<3){
            ans++;
        }
    }
    printf("离校申请次数<3人数：%d\n",ans);
}
void admin_analyze(){
    printf("\n"
    "----------------\n"
    "1、核酸检测<5\n"
    "2、接种疫苗<2\n"
    "3、离校申请次数<3\n"
    "----------------\n"
    "\n");
    int n;
    scanf("%d",&n);
    switch(n){
    case 1:admin_analyze_1();
        break;
    case 2:admin_analyze_2();
        break;
    case 3:admin_analyze_3();
        break;
    }
}
void admin_leave(){
    reps{
        int len;
        printf("%d、",ii);
        printf("学号: %d 姓名：%s\n",stu[ii].id,stu[ii].name);
        len=stu[ii].inol;
        repl{
            printf("%d、ID：%-5d 离校原因:%s ",l,stu[ii].lea[l].id,stu[ii].lea[l].ide);
            printf("离校时间：%s ",stu[ii].lea[l].lt);
            printf("返校时间：%s ",stu[ii].lea[l].rt);
            printf("行程轨迹：%s ",stu[ii].lea[l].tra);
            if(stu[ii].lea[l].sta==1)
                printf("审核状态：已审核 ");
            else
                printf("审核状态：未审核 ");

            printf("审核意见：%s ",stu[ii].lea[l].ide);
        }
        printf("------------------------------------------------------\n");
    }
    int sid,iid;
    printf("输入要修改的学生编号：");
    scanf("%d",&sid);
    if(sid>=admin.stu_len){
        printf("编号错误\n");
        return;
    }
    printf("输入要修改的离校编号：");
    scanf("%d",&iid);
    if(iid>=stu[sid].leal){
        printf("编号错误\n");
        return;
    }
    printf("同意申请？(1、同意/2、不同意)：");
    scanf("%d",&stu[sid].lea[iid].sta);
    if(stu[sid].lea[iid].sta!=1||stu[sid].lea[iid].sta!=2){
        printf("编号错误\n");
        return;
    }
    printf("输入审核意见：");
    scanf("%s",stu[sid].lea[iid].ide);
}

void admin_menu(){
    int n;
    int id;
    char pw[20];
    printf("输入管理员账号：");
    scanf("%d",&id);
    if(id!=admin.id){
        printf("账号不正确\n");
        return;
    }
    printf("输入管理员密码：");
    scanf("%s",pw);
    if(strcmp(pw,admin.pw)){
        printf("密码不正确\n");
        return;
    }
    while(1){
        printf("\n"
        "----------------\n"
        "1、添加/删除学生信息\n"
        "2、查看所有填报记录\n"
        "3、查询信息\n"
        "4、统计分析\n"
        "5、离校审核\n"
        "6、退出登陆\n"
        "----------------\n"
        "\n");
        scanf("%d",&n);
        switch(n){
        case 1:admin_modify();
            break;
        case 2:admin_all();
            break;
        case 3:admin_query();
            break;
        case 4:admin_analyze();
            break;
        case 5:admin_leave();
            break;
        case 6:return;
        }
        time(&lt);;
    }
}
void stu_modify(int i){
    printf("密码：");
    scanf("%s",stu[i].pw);
    printf("姓名：");
    scanf("%s",stu[i].name);
    printf("电话：");
    scanf("%s",stu[i].tel);
    printf("电子邮箱：");
    scanf("%s",stu[i].email);
    printf("院系：");
    scanf("%s",stu[i].fac);
    printf("班级：");
    scanf("%s",stu[i].cla);
    printf("通讯地址：");
    scanf("%s",stu[i].addr);
    printf("修改=成功\n");
}
void stu_add_1(int i){
    Hea temp;
    temp.id=stu[i].heal;
    printf("时间？");
    scanf("%s",temp.t);
    printf("早上体温？");
    scanf("%f",&temp.mor);
    printf("中午体温？");
    scanf("%f",&temp.noo);
    printf("晚上体温？");
    scanf("%f",&temp.eve);
    printf("咳嗽？");
    scanf("%s",temp.cou);
    printf("发热？");
    scanf("%s",temp.fev);
    printf("已提交每日健康记录\n");
    stu[i].hea[stu[i].heal++]=temp;
}
void stu_add_2(int i){
    Test temp;
    temp.id=stu[i].testl;
    printf("检测时间?");
    scanf("%s",temp.t);
    printf("检测地点?");
    scanf("%s",temp.addr);
    printf("检测结果?");
    scanf("%s",temp.g);
    printf("已提交核酸检测记录\n");
    stu[i].test[stu[i].testl++]=temp;
}
void stu_add_3(int i){
    Ino temp;
    temp.id=stu[i].inol;
    printf("接种次序号？");
    scanf("%d",&temp.t_id);
    printf("接种时间？");
    scanf("%s",temp.t);
    printf("接种地点？");
    scanf("%s",temp.addr);
    printf("疫苗型号？");
    scanf("%s",temp.ino_id);
    printf("已提交疫苗接种记录\n");
    stu[i].ino[stu[i].inol++]=temp;
}
void stu_add_4(int i){
    Lea temp;
    temp.id=stu[i].leal;
    printf("离校原因？");
    scanf("%s",temp.rea);
    printf("出校时间？");
    scanf("%s",temp.lt);
    printf("返校时间？");
    scanf("%s",temp.rt);
    printf("行程轨迹？");
    scanf("%s",temp.tra);
    temp.sta=0;
    strcpy(temp.ide,"");
    printf("已提交离校申请\n");
    stu[i].lea[stu[i].leal++]=temp;
}
void stu_add(int i){
    printf("\n"
    "----------------\n"
    "1、每日健康记录\n"
    "2、核酸检测记录\n"
    "3、疫苗接种记录\n"
    "4、离校申请记录\n"
    "----------------\n"
    "\n");
    int n;
    scanf("%d",&n);
    switch(n){
    case 1:stu_add_1(i);
        break;
    case 2:stu_add_2(i);
        break;
    case 3:stu_add_3(i);
        break;
    case 4:stu_add_4(i);
        break;
    }
}
void stu_query_1(int i){
    int len;
    len=stu[i].heal;
    repl{
        printf("ID：%-5d TIME:%-10s",stu[i].hea[l].id,stu[i].hea[l].t);
        printf("早：%-5.1f中：%-5.1f晚：%-5.1f",stu[i].hea[l].mor,stu[i].hea[l].noo,stu[i].hea[l].eve);
        printf("是否咳嗽：%s 是否发烧：%s\n",stu[i].hea[l].cou,stu[i].hea[l].fev);
    }
}
void stu_query_2(int i){
    int len;
    len=stu[i].testl;
    repl{
        printf("ID：%-5d TIME:%-10s",stu[i].test[l].id,stu[i].test[l].t);
        printf("检测地点：%s 检测结果：%s\n",stu[i].test[l].addr,stu[i].test[l].g);
    }
}
void stu_query_3(int i){
    int len;
    len=stu[i].inol;
    repl{
        printf("ID：%-5d TIME:%-10s 接种次数序号:%d ",stu[i].ino[l].id,stu[i].ino[l].t,stu[i].ino[l].t_id);
        printf("检测地点：%s 疫苗型号：%s\n",stu[i].ino[l].addr,stu[i].ino[l].ino_id);
    }
}
void stu_query_4(int i){
    int len;
    len=stu[i].inol;
    repl{
        printf("ID：%-5d 离校原因:%s ",stu[i].lea[l].id,stu[i].lea[l].rea);
        printf("离校时间：%s ",stu[i].lea[l].lt);
        printf("返校时间：%s ",stu[i].lea[l].rt);
        printf("行程轨迹：%s ",stu[i].lea[l].tra);
        if(stu[i].lea[l].sta==1)
            printf("审核状态：已审核 ");
        else
            printf("审核状态：未审核 ");

        printf("审核意见：%s ",stu[i].lea[l].ide);
    }
}
void stu_query(int i){
    printf("\n"
    "----------------\n"
    "1、每日健康记录\n"
    "2、核酸检测记录\n"
    "3、疫苗接种记录\n"
    "4、离校申请记录\n"
    "----------------\n"
    "\n");
    int n;
    scanf("%d",&n);
    switch(n){
    case 1:stu_query_1(i);
        break;
    case 2:stu_query_2(i);
        break;
    case 3:stu_query_3(i);
        break;
    case 4:stu_query_4(i);
        break;
    }
}
void stu_menu(){
    int n;
    int id,sloc=-1;
    char pw[20];
    printf("输入学生账号：");
    scanf("%d",&id);
    reps{
        if(id==stu[ii].id){
            sloc=ii;
            printf("输入学生密码：");
            scanf("%s",pw);
            if(strcmp(pw,stu[ii].pw)){
                printf("密码不正确\n");
                return;
            }
        }
    }
    if(sloc==-1){
        printf("账号不正确\n");
        return;
    }
    while(1){
        printf("\n"
        "----------------\n"
        "1、修改个人信息\n"
        "2、填报记录\n"
        "3、查询自己填报的历史记录\n"
        "4、退出登陆\n"
        "----------------\n"
        "\n");
        scanf("%d",&n);
        time(&lt);
        switch(n){
        case 1:stu_modify(sloc);
            break;
        case 2:stu_add(sloc);
            break;
        case 3:stu_query(sloc);
            break;
        case 4:return;
        }
    }
}
void save(){
    FILE* f=fopen("data","wb+");
    fwrite(&admin,sizeof(Admin),1,f);
    fwrite(stu,sizeof(Stu),SN,f);
    fclose(f);
    exit(0);
}
int main(){
    init();
    int n;
    while(1){
        printf("\n"
               "----------------\n"
               "1、登陆管理员\n"
               "2、登陆学生\n"
               "3、退出\n"
               "----------------\n"
               "\n");
        scanf("%d",&n);
        if(n==1)
            admin_menu();
        else if(n==2)
            stu_menu();
        else
            save();
    }
    return 0;
}
