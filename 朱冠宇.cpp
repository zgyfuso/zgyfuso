#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void manu(void);
int main(void)
{
	float a_score = 1000;
	float b_score = 1000;
	float a_1, a_2, a_3,a_totle,a_input;
	float b_1, b_2, b_3,b_totle,b_input;
	char test_a,test_b;
	manu( );
	while (a_score >= 0 || b_score >= 0)
	{

		{printf("now A player chouse you belt\n");
		scanf_s("%c", &test_a);
		if(test_a=='\n')
			scanf_s("%c", &test_a);
		
		while((test_a == 's' || test_a == 'b' || test_a == 'n') && test_a != '\n')
		{

			printf("A player now you should chouse you getin\n");
			printf("do not more than 100 but less than 10\n");
			scanf_s("%f", &a_input);
			if (a_input < 10 || a_input>100)
			{
				printf("you are wrong and go again\n");
			}
			else {
				switch (test_a) {
				case 's':
					srand(time(0));
					a_1 = rand() % 8;
					a_2 = rand() % 8;
					a_3 = rand() % 8;
					printf("you score is %f,%f,%f\n", a_1, a_2, a_3);
					printf("your totle is%f\n", a_totle = a_1 + a_2 + a_3);
					if (a_totle < 11)
					{
						printf("you win and you get double of you getin\n");
						a_score += (a_input * 2);
						printf("now your score is%f\n", a_score);
					}
					else {
						printf("you lost it\n");
						a_score -= a_input;
						printf("now your score is%f\n", a_score);
					}

					break;
				case'b':
					srand(time(0));
					a_1 = rand() % 8;
					a_2 = rand() % 8;
					a_3 = rand() % 8;
					printf("you score is %f,%f,%f\n", a_1, a_2, a_3);
					printf("your totle is%f\n", a_totle = a_1 + a_2 + a_3);
					if (a_totle > 11)
					{
						printf("you win and you get double of you getin\n");
						a_score += (a_input * 2);
						printf("now your score is%f\n", a_score);
					}
					else {
						printf("you lost it\n");
						a_score -= a_input;
						printf("now your score is%f\n", a_score);
					}

					break;
				case'n':
					srand(time(0));
					a_1 = rand() % 8;
					a_2 = rand() % 8;
					a_3 = rand() % 8;
					printf("you score is %f,%f,%f\n", a_1, a_2, a_3);
					if (a_1 == a_2 == a_3)
					{
						printf("you win and you get double of you getin\n");
						a_score += (a_input * 10);
						printf("now your score is%f\n", a_score);
					}
					else {
						printf("you lost it\n");
						a_score -= a_input;
						printf("now your score is%f\n", a_score);
					}

					break;
				}
				break;
			}
		}
	
		
			printf("now is B player turn\n\n\n\n");
	}
		printf("now B player chouse you belt\n");
				
				scanf_s("%c", &test_b);
				if (test_b == '\n')
					scanf_s("%c", &test_b);
				
				while ((test_b == 's' || test_b == 'b' || test_b == 'n') && test_b != '\n')
				{

					printf("B player now you should chouse you getin\n");
					printf("do not more than 100 but less than 10\n");
					scanf_s("%f", &b_input);
					if (b_input < 10 || b_input>100)
					{
						printf("you are wrong and go again\n");
					}
					else {
						switch (test_b) {
						case 's':
							srand(time(0));
							b_1 = rand() % 8;
							b_2 = rand() % 8;
							b_3 = rand() % 8;
							printf("B player you score is %f,%f,%f\n", b_1, b_2, b_3);
							printf("your totle is%f\n", b_totle = b_1 + b_2 + b_3);
							if (b_totle < 11)
							{
								printf("you win and you get double of you getin\n");
								b_score += (b_input * 2);
								printf("B player now your score is%f\n", b_score);
							}
							else {
								printf("you lost it\n");
								b_score -= b_input;
								printf("now your score is%f\n", b_score);
							}

							break;
						case'b':
							srand(time(0));
							b_1 = rand() % 8;
							b_2 = rand() % 8;
							b_3 = rand() % 8;
							printf("you score is %f,%f,%f\n", b_1, b_2, b_3);
							printf("your totle is%f\n", b_totle = b_1 + b_2 + b_3);
							if (b_totle > 11)
							{
								printf("you win and you get double of you getin\n");
								b_score += (b_input * 2);
								printf("now your score is%f\n", b_score);
							}
							else {
								printf("you lost it\n");
								b_score -= b_input;
								printf("now your score is%f\n", b_score);
							}

							break;
						case'n':
							srand(time(0));
							b_1 = rand() % 8;
							b_2 = rand() % 8;
							b_3 = rand() % 8;
							printf("B player you score is %f,%f,%f\n", b_1, b_2, b_3);
							if (b_1 == b_2 == b_3)
							{
								printf("you win and you get double of you getin\n");
								b_score += (b_input * 10);
								printf("now your score is%f\n", b_score);
							}
							else {
								printf("you lost it\n");
								b_score -= b_input;
								printf("now your score is%f\n", b_score);
							}

							break;
						}
						break;
					}
				}
				
					printf("now is A player turn\n\n\n\n");

			
		
		

	}
	printf("game over\n");
	
	return 0;
}
void manu(void)
{
	printf("chouse one of the type of select\n");
	printf("chouse one \n");
	printf("inf not you will lost a chance\n");
	printf("small          big          nb\n");
	printf("  s             b           n\n\n\n\n");
}

