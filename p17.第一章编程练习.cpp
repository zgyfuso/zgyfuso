#include<stdio.h>
#include<stdlib.h>
#define LENGH 10
int again=1;
typedef struct commodity
{
	long numbering;
	char name[LENGH];
	int quantity;
	int price;
	char time[LENGH];
	char suppeier[LENGH];
}COMMODITY;
void show_manu(COMMODITY commodity[]);
void get_information(COMMODITY commodity[]);
void out_information(COMMODITY commodity[]);
void delete_information(COMMODITY commodity[]);
void change_information(COMMODITY commodity[]);
void rout(void);
int main(void)
{
	COMMODITY commodity[LENGH];
	do {
		show_manu(commodity);
	} while (again==1);
	//你没看错，主函数就这一个循环，hhhhhhhh
	//这就是王者
}
void get_information(COMMODITY commodity[])
{
	int i = 0;
	char flag;
	printf("商品入库操作");
	do {
		
		printf("\n*************************************\n");
		printf("输入第%d个商品的相关信息：\n",i+1);
		printf("输入编号：");
		scanf_s("%ld", &commodity[i].numbering);
		printf("输入名称：（不超过十个字符且不包含空格）：");
		scanf_s("%s", commodity[i].name,LENGH);
		printf("输入数量：");
		scanf_s("%d", &commodity[i].quantity);
		printf("输入价格：");
		scanf_s("%d", &commodity[i].price);
		printf("输入生产日期：（格式为2000-1-1）   ");
		scanf_s("%s", commodity[i].suppeier,LENGH);
		printf("输入供应商（不超过十个字符且不包含空格）：");
		scanf_s("%s", commodity[i].time,LENGH);
		printf("*************************************\n");
		i++;
		printf("成功录入%d个商品信息，是否继续输入：（是-y，否-n）",i);
		getchar();
		flag = getchar();
	} while (flag =='y' && i < LENGH);
	printf("你已输入%d个商品信息", i );

}
void show_manu(COMMODITY commodity[])
{
	system("cls");
	int flag;
	printf("\n*************************************\n");
	printf("***欢迎使用库存管理系统***");
	printf("\n  *1：商品入库  *");
	printf("\n  *2：商品出库  *");
	printf("\n  *3：删除商品  *");
	printf("\n  *4：修改商品  *");
	printf("\n  *5：查询商品信息  *");
	printf("\n  *6：商品排序  *");
	printf("\n  *7：商品统计  *");
	printf("\n*************************************\n");
	
	do {
		printf("请输入您需要进行操作的序号：");
		scanf_s("%d", &flag);
	} while (flag>7||flag<1);

	switch (flag)
	{
	case 1:system("cls");
		get_information(commodity);
		rout();
		break;
	case 2:system("cls");
		out_information(commodity);
		rout();
		break;
	case 3:system("cls");
		delete_information(commodity);
		rout();
		break;
	case 4:system("cls");
		change_information(commodity);
		rout();
		break;
	case 5:system("cls");
		printf("\n\n\n\n\n\n我懒得写了，手酸,框架写好了，加油，火火恍恍惚哈\n");
		rout();
		break;
	case 6:system("cls");
		printf("\n\n\n\n\n\n我懒得写了，手酸，框架写好了，加油，火火恍恍惚哈\n");
		rout();
		break;
	case 7:system("cls");
		printf("\n\n\n\n\n\n我懒得写了，手酸，框架写好了，加油，火火恍恍惚哈\n");
		rout();
		break;
	}

	}
void out_information(COMMODITY commodity[])
{
	long numbering;
	printf("商品出库操作");
	printf("\n*************************************\n");
	printf("输入想要出库的商品的编号：");
	scanf_s("%ld", &numbering);
	for (int i = 0; i < LENGH; i++) {
		if (numbering == commodity[i].numbering) {
			printf("找到你需要的商品：位于第%d个，现将其出库。", i + 1);
			printf("***出库成功***");
			printf("\n该商品编号为%ld",commodity[i].numbering);
			printf("\n名称为%s", commodity[i].name);
			printf("\n数量为 % d", commodity[i].quantity);
			printf("\n价格为%d", commodity[i].price);
			printf("\n生产日期为%s",commodity[i].suppeier);
			printf("\n生产厂家为%s",commodity[i].time);
		}
		else {
			printf("库存中不存在%ld编号的商品", numbering);
			break;
		}
	}
}
void rout(void)
{
	char charge;
	getchar();
	
		printf("\n##########################\n");
		printf("是否继续运行该程序（是-y，否-n）");
		printf("\n##########################\n");
		charge = getchar();

	
	if (charge == 'n') {
		again = 0;
		system("cls");
		printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t感谢使用该程序");
		int  i, j, k, l, m;
		char c = 3;
		for (i = 1; i <= 5; i++)    printf("\n"); 
		for (i = 1; i <= 3; i++) { 
			for (j = 1; j <= 32 - 2 * i; j++)  printf(" ");
			for (k = 1; k <= 4 * i + 1; k++)  printf("%c", c);
			for (l = 1; l <= 13 - 4 * i; l++)  printf(" "); 
			for (m = 1; m <= 4 * i + 1; m++)  printf("%c", c);
			printf("\n"); 
		}
		for (i = 1; i <= 3; i++) { 
			for (j = 1; j <= 24 + 1; j++)   printf(" "); 
			for (k = 1; k <= 29; k++)   printf("%c", c);
			printf("\n"); 
		}
		for (i = 7; i >= 1; i--) { 
			for (j = 1; j <= 40 - 2 * i; j++)  printf(" "); 
			for (k = 1; k <= 4 * i - 1; k++)  printf("%c", c);
			printf("\n");  
		}
		for (i = 1; i <= 39; i++)    printf(" "); 
		printf("%c\n", c);  
		for (i = 1; i <= 5; i++)    printf("\n"); 
	}
	else {
		again = 1;
	}
}
void delete_information(COMMODITY commodity[])
{
	long flag;
	printf("商品删除操作");
	printf("\n##########################\n");
	printf("输入你要删除商品的编号：");
	scanf_s("%ld", &flag);
	for (int i = 0; i < LENGH; i++) {
		if (flag == commodity[i].numbering) {
			printf("找到编号为%ld的商品，现已删除\n",flag);
			for (int j = i; j < LENGH; j++) {
				commodity[j] = commodity[j + 1];
			}
			break;
		}
		else {
			printf("找不到编号为%ld的商品", flag);
			break;
		}
	}
}
void change_information(COMMODITY commodity[])
{
	long flag;
	printf("修改商品模块");
	printf("\n##########################\n");
	printf("输入商品编号：");
	scanf_s("%ld", &flag);
	for (int i = 0; i < LENGH; i++) {
		if (flag == commodity[i].numbering) {
			printf("找到编号为%ld的商品，现在可进行修改",flag);
			printf("\n##########################\n");
			printf("输入编号：");
			scanf_s("%ld", &commodity[i].numbering);
			printf("输入名称：（不超过十个字符且不包含空格）：");
			scanf_s("%s", commodity[i].name, LENGH);
			printf("输入数量：");
			scanf_s("%d", &commodity[i].quantity);
			printf("输入价格：");
			scanf_s("%d", &commodity[i].price);
			printf("输入生产日期：（格式为2000-1-1）   ");
			scanf_s("%s", commodity[i].suppeier, LENGH);
			printf("输入供应商（不超过十个字符且不包含空格）：");
			scanf_s("%s", commodity[i].time, LENGH);
			printf("\n##########################\n");
			printf("数据修改完成");
			break;
		}
		else {
			printf("\n##########################\n");
			printf("没有找到编号为%ld的商品", flag);
			printf("\n##########################\n");
			break;
		}
	}
}
//看完了吧，是不是没发现一个注释，binggo，那就对了！！！！！！
//write everything,read nothing-by zgy