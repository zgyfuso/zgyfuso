#include<stdio.h>
long readscore(long score[], long number[]);
long findmax(long score[], long member);
#define N 40
int main(void)
{
	printf("every student(do not more then 40) score and student member");
	printf("input 'q' to quit\n");
	long score[N], number[N], member, max;
	member = readscore(score, number);
	printf("now all of %ld student message input\n", member);
	max = findmax(score, member);
	printf("the max is %ld number is %ld", score[max], number[max]);
	return 0;
}
long readscore(long score[], long number[])
{
	long i = -1;
	int flag = 1;
	do {
		i++;
		printf("input ***score*** %d \n", flag);
		flag++;
		scanf_s("%ld", &score[i]);
		printf("***number***\n");
		scanf_s("%ld", &number[i]);
		printf("\n\n");
	} while (score[i] >= 0 || number[i] > 0);
	return i;
}
long findmax(long score[], long member)
{
	long i, j, k = 0;
	for (i = 0; i < member - 1; i++) {
		k = i;
		for (j = i + 1; j < member; j++) {
			if (score[j] > score[k]) {
				k = j;
			}
		}
	}
	return k;

}