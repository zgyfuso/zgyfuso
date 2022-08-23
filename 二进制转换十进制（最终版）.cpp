#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int examine(char* array);
int change(char*, int);
int run(char*, char*, int);
void put(char*, int);
int main(void)
{
	char array[20] = "311100110001";
	char last[20];
	int number = strlen(array);
	int flag,wrong;
	//printf("number is%d\n", number);²âÊÔ´úÂë
	if (wrong=examine(array) == 0) goto end;
	printf("×îÖÕ½á¹ûÊÇ£º");
	flag=run(array, last, number);
	//printf("\n%d", flag);
	put(last, flag);
	end:
	return 0;
}
int run(char*array, char*last, int number)
{
	int sum = 0, temp = 0, s_flag = 0;
	int f_flag = 1, t = 1;
	int i;
	for (i = number - 1; i >= 0; i--, f_flag++) {
		//printf("%d\n", array[i] - '0');²âÊÔ´úÂë
		temp = t * (array[i] - '0');
		sum += temp;
		t *= 2;
		//printf("###%d\n", flag);²âÊÔ´úÂë
		if (f_flag % 4 == 0) {
			t = 1;
			last[s_flag] = sum;
			//printf("%d", last[s_flag]);²âÊÔ´úÂë
			++s_flag;
			sum = 0;
		}
	}
	return s_flag;
}
void put(char*last, int flag)
{
	for (int i = flag - 1; i >= 0; i--) {
		printf("%d", last[i]);
	}
}
int examine(char *array)
{
	for (int i = 0; i < 20; i++)
	{
		if ((array[i] - '0') != 1 || (array[i] - '0') != 0)
		{
			printf("³ÌÐò´íÎó\n");
			return 0;
		}
	}
}