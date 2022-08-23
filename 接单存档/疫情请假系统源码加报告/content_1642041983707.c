#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 100
#define SN 100
#define reps int ii;for(ii=0;ii<admin.stu_len;ii++)
#define repl int l;for(l=0;l<len;l++)
/*
admin   ����Ա
hea     ÿ�ս���
test    ������
ino     ����
lea     ��У����
stu     ѧ��
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
        printf("��δע�����Ա���������Ա�˺ţ�");
        scanf("%d",&admin.id);
        printf("�������Ա���룺");
        scanf("%s",admin.pw);
        printf("����Աע��ɹ�\n");
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
    printf("������Ҫ���ӵ�ѧ����id��");
    scanf("%d",&id);
    printf("������ %d �����룺",id);
    scanf("%s",pw);
    stu[loc].id=id;
    strcpy(stu[loc].pw,pw);
    printf("��ӳɹ�����֪ͨ %d �����޸ĸ�����Ϣ\n",id);
}
void admin_modify_del(){
    int id;
    int flag=0;
    printf("������Ҫɾ����ѧ����id��");
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
        printf("û�� %d ���ѧ��\n",id);
        return;
    }
    printf("%d ɾ���ɹ�\n",id);
}
void admin_modify(){
    printf("\n"
    "----------------\n"
    "1�����\n"
    "2��ɾ��\n"
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
        printf("ѧ��: %d ������%s\n",stu[ii].id,stu[ii].name);
        len=stu[ii].heal;
        repl{
            printf("ID��%-5d TIME:%-10s",stu[ii].hea[l].id,stu[ii].hea[l].t);
            printf("�磺%-5.1f�У�%-5.1f��%-5.1f",stu[ii].hea[l].mor,stu[ii].hea[l].noo,stu[ii].hea[l].eve);
            printf("�Ƿ���ԣ�%s �Ƿ��գ�%s\n",stu[ii].hea[l].cou,stu[ii].hea[l].fev);
        }
        printf("------------------------------------------------------\n");
    }
}
void admin_all_2(){
    reps{
        int len;
        printf("ѧ��: %d ������%s\n",stu[ii].id,stu[ii].name);
        len=stu[ii].testl;
        repl{
            printf("ID��%-5d TIME:%-10s",stu[ii].test[l].id,stu[ii].test[l].t);
            printf("���ص㣺%s �������%s\n",stu[ii].test[l].addr,stu[ii].test[l].g);
        }
        printf("------------------------------------------------------\n");
    }
}
void admin_all_3(){
    reps{
        int len;
        printf("ѧ��: %d ������%s\n",stu[ii].id,stu[ii].name);
        len=stu[ii].inol;
        repl{
            printf("ID��%-5d TIME:%-10s ���ִ������:%d ",stu[ii].ino[l].id,stu[ii].ino[l].t,stu[ii].ino[l].t_id);
            printf("���ص㣺%s �����ͺţ�%s\n",stu[ii].ino[l].addr,stu[ii].ino[l].ino_id);
        }
        printf("------------------------------------------------------\n");
    }
}
void admin_all_4(){
    reps{
        int len;
        printf("ѧ��: %d ������%s\n",stu[ii].id,stu[ii].name);
        len=stu[ii].inol;
        repl{
            printf("ID��%-5d ��Уԭ��:%s ",stu[ii].lea[l].id,stu[ii].lea[l].rea);
            printf("��Уʱ�䣺%s ",stu[ii].lea[l].lt);
            printf("��Уʱ�䣺%s ",stu[ii].lea[l].rt);
            printf("�г̹켣��%s ",stu[ii].lea[l].tra);
            if(stu[ii].lea[l].sta==1)
                printf("���״̬������� ");
            else
                printf("���״̬��δ��� ");

            printf("��������%s ",stu[ii].lea[l].ide);
        }
        printf("------------------------------------------------------\n");
    }
}
void admin_all(){
    printf("\n"
    "----------------\n"
    "1��ÿ�ս�����¼\n"
    "2���������¼\n"
    "3��������ּ�¼\n"
    "4����У�����¼\n"
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
                        printf("���´���37.3��ѧ����\n");
                        flag=0;
                    }
                    printf("ѧ��: %d ������%s\n",stu[ii].id,stu[ii].name);
                    break;
               }
        }
    }
    if(flag)
        printf("û�����´���37.3��ѧ��\n");
}
void admin_query_2(){
    int flag=1;
    reps{
        if(stu[ii].inol<2){
            if(flag){
                printf("������ִ���С��2��ѧ����\n");
                flag=0;
            }
            printf("ѧ��: %d ������%s\n",stu[ii].id,stu[ii].name);
        }
    }
    if(flag)
        printf("û��������ִ���С��2��ѧ��\n");
}
void admin_query_3(){
    int flag=1;
    reps{
        if(stu[ii].inol>3){
            if(flag){
                printf("��У�����������3��ѧ����\n");
                flag=0;
            }
            printf("ѧ��: %d ������%s\n",stu[ii].id,stu[ii].name);
        }
    }
    if(flag)
        printf("û����У�����������3��ѧ��\n");
}
void admin_query(){
    printf("\n"
    "----------------\n"
    "1���Ƿ��������쳣��>37.3��\n"
    "2����������<2\n"
    "3����У�������>3\n"
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
    printf("������<5������%d\n",ans);
}
void admin_analyze_2(){
    int ans=0;
    reps{
        if(stu[ii].inol<2){
            ans++;
        }
    }
    printf("��������<2������%d\n",ans);
}
void admin_analyze_3(){
    int ans=0;
    reps{
        if(stu[ii].leal<3){
            ans++;
        }
    }
    printf("��У�������<3������%d\n",ans);
}
void admin_analyze(){
    printf("\n"
    "----------------\n"
    "1��������<5\n"
    "2����������<2\n"
    "3����У�������<3\n"
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
        printf("%d��",ii);
        printf("ѧ��: %d ������%s\n",stu[ii].id,stu[ii].name);
        len=stu[ii].inol;
        repl{
            printf("%d��ID��%-5d ��Уԭ��:%s ",l,stu[ii].lea[l].id,stu[ii].lea[l].ide);
            printf("��Уʱ�䣺%s ",stu[ii].lea[l].lt);
            printf("��Уʱ�䣺%s ",stu[ii].lea[l].rt);
            printf("�г̹켣��%s ",stu[ii].lea[l].tra);
            if(stu[ii].lea[l].sta==1)
                printf("���״̬������� ");
            else
                printf("���״̬��δ��� ");

            printf("��������%s ",stu[ii].lea[l].ide);
        }
        printf("------------------------------------------------------\n");
    }
    int sid,iid;
    printf("����Ҫ�޸ĵ�ѧ����ţ�");
    scanf("%d",&sid);
    if(sid>=admin.stu_len){
        printf("��Ŵ���\n");
        return;
    }
    printf("����Ҫ�޸ĵ���У��ţ�");
    scanf("%d",&iid);
    if(iid>=stu[sid].leal){
        printf("��Ŵ���\n");
        return;
    }
    printf("ͬ�����룿(1��ͬ��/2����ͬ��)��");
    scanf("%d",&stu[sid].lea[iid].sta);
    if(stu[sid].lea[iid].sta!=1||stu[sid].lea[iid].sta!=2){
        printf("��Ŵ���\n");
        return;
    }
    printf("������������");
    scanf("%s",stu[sid].lea[iid].ide);
}

void admin_menu(){
    int n;
    int id;
    char pw[20];
    printf("�������Ա�˺ţ�");
    scanf("%d",&id);
    if(id!=admin.id){
        printf("�˺Ų���ȷ\n");
        return;
    }
    printf("�������Ա���룺");
    scanf("%s",pw);
    if(strcmp(pw,admin.pw)){
        printf("���벻��ȷ\n");
        return;
    }
    while(1){
        printf("\n"
        "----------------\n"
        "1�����/ɾ��ѧ����Ϣ\n"
        "2���鿴�������¼\n"
        "3����ѯ��Ϣ\n"
        "4��ͳ�Ʒ���\n"
        "5����У���\n"
        "6���˳���½\n"
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
    printf("���룺");
    scanf("%s",stu[i].pw);
    printf("������");
    scanf("%s",stu[i].name);
    printf("�绰��");
    scanf("%s",stu[i].tel);
    printf("�������䣺");
    scanf("%s",stu[i].email);
    printf("Ժϵ��");
    scanf("%s",stu[i].fac);
    printf("�༶��");
    scanf("%s",stu[i].cla);
    printf("ͨѶ��ַ��");
    scanf("%s",stu[i].addr);
    printf("�޸�=�ɹ�\n");
}
void stu_add_1(int i){
    Hea temp;
    temp.id=stu[i].heal;
    printf("ʱ�䣿");
    scanf("%s",temp.t);
    printf("�������£�");
    scanf("%f",&temp.mor);
    printf("�������£�");
    scanf("%f",&temp.noo);
    printf("�������£�");
    scanf("%f",&temp.eve);
    printf("���ԣ�");
    scanf("%s",temp.cou);
    printf("���ȣ�");
    scanf("%s",temp.fev);
    printf("���ύÿ�ս�����¼\n");
    stu[i].hea[stu[i].heal++]=temp;
}
void stu_add_2(int i){
    Test temp;
    temp.id=stu[i].testl;
    printf("���ʱ��?");
    scanf("%s",temp.t);
    printf("���ص�?");
    scanf("%s",temp.addr);
    printf("�����?");
    scanf("%s",temp.g);
    printf("���ύ�������¼\n");
    stu[i].test[stu[i].testl++]=temp;
}
void stu_add_3(int i){
    Ino temp;
    temp.id=stu[i].inol;
    printf("���ִ���ţ�");
    scanf("%d",&temp.t_id);
    printf("����ʱ�䣿");
    scanf("%s",temp.t);
    printf("���ֵص㣿");
    scanf("%s",temp.addr);
    printf("�����ͺţ�");
    scanf("%s",temp.ino_id);
    printf("���ύ������ּ�¼\n");
    stu[i].ino[stu[i].inol++]=temp;
}
void stu_add_4(int i){
    Lea temp;
    temp.id=stu[i].leal;
    printf("��Уԭ��");
    scanf("%s",temp.rea);
    printf("��Уʱ�䣿");
    scanf("%s",temp.lt);
    printf("��Уʱ�䣿");
    scanf("%s",temp.rt);
    printf("�г̹켣��");
    scanf("%s",temp.tra);
    temp.sta=0;
    strcpy(temp.ide,"");
    printf("���ύ��У����\n");
    stu[i].lea[stu[i].leal++]=temp;
}
void stu_add(int i){
    printf("\n"
    "----------------\n"
    "1��ÿ�ս�����¼\n"
    "2���������¼\n"
    "3��������ּ�¼\n"
    "4����У�����¼\n"
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
        printf("ID��%-5d TIME:%-10s",stu[i].hea[l].id,stu[i].hea[l].t);
        printf("�磺%-5.1f�У�%-5.1f��%-5.1f",stu[i].hea[l].mor,stu[i].hea[l].noo,stu[i].hea[l].eve);
        printf("�Ƿ���ԣ�%s �Ƿ��գ�%s\n",stu[i].hea[l].cou,stu[i].hea[l].fev);
    }
}
void stu_query_2(int i){
    int len;
    len=stu[i].testl;
    repl{
        printf("ID��%-5d TIME:%-10s",stu[i].test[l].id,stu[i].test[l].t);
        printf("���ص㣺%s �������%s\n",stu[i].test[l].addr,stu[i].test[l].g);
    }
}
void stu_query_3(int i){
    int len;
    len=stu[i].inol;
    repl{
        printf("ID��%-5d TIME:%-10s ���ִ������:%d ",stu[i].ino[l].id,stu[i].ino[l].t,stu[i].ino[l].t_id);
        printf("���ص㣺%s �����ͺţ�%s\n",stu[i].ino[l].addr,stu[i].ino[l].ino_id);
    }
}
void stu_query_4(int i){
    int len;
    len=stu[i].inol;
    repl{
        printf("ID��%-5d ��Уԭ��:%s ",stu[i].lea[l].id,stu[i].lea[l].rea);
        printf("��Уʱ�䣺%s ",stu[i].lea[l].lt);
        printf("��Уʱ�䣺%s ",stu[i].lea[l].rt);
        printf("�г̹켣��%s ",stu[i].lea[l].tra);
        if(stu[i].lea[l].sta==1)
            printf("���״̬������� ");
        else
            printf("���״̬��δ��� ");

        printf("��������%s ",stu[i].lea[l].ide);
    }
}
void stu_query(int i){
    printf("\n"
    "----------------\n"
    "1��ÿ�ս�����¼\n"
    "2���������¼\n"
    "3��������ּ�¼\n"
    "4����У�����¼\n"
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
    printf("����ѧ���˺ţ�");
    scanf("%d",&id);
    reps{
        if(id==stu[ii].id){
            sloc=ii;
            printf("����ѧ�����룺");
            scanf("%s",pw);
            if(strcmp(pw,stu[ii].pw)){
                printf("���벻��ȷ\n");
                return;
            }
        }
    }
    if(sloc==-1){
        printf("�˺Ų���ȷ\n");
        return;
    }
    while(1){
        printf("\n"
        "----------------\n"
        "1���޸ĸ�����Ϣ\n"
        "2�����¼\n"
        "3����ѯ�Լ������ʷ��¼\n"
        "4���˳���½\n"
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
               "1����½����Ա\n"
               "2����½ѧ��\n"
               "3���˳�\n"
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
