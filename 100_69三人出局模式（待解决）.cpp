#include<stdio.h>
#include<string.h>
void main()
{
	int array[5] = { 1,2,3,4,5 };
	int flag,temp;
	for (int i = 0,flag=1; i < 50; i++,flag++) {
		if (flag == 3) {
			array[i] = 0;
			flag = 0;
		}
		for (int i = 0,temp=0;i<5;i++) {
			if (array[i] == 0) temp++;
			if (temp == 4) goto end;
		}
	}
end: 
	for (int i = 0; i < 5; i++) {
		if (array[i] != 0) printf("last is %d", array[i]);
	}
}