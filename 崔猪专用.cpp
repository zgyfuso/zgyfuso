#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
//�����뿴�����˷������ԭ����Ӧ��û�����������ɰ�Դ�뷢�����˰ɣ�
//����ʲôԭ�򣬸�л�����飬ף���ã�����
void heart(void);
void hundred(void);
void love(void);
void ily(void);
void color_love(void);
void random(int hhh);
void thirty(void);
void put(int allday, int year, int mouths, int days, int answer_a);
void anniversary(void);
void birthday(void);
int allday(int twoday[][12], int allyears[5], int mouth, int days, int years, int startyears, int startmouths, int startdays);
int main(void)
{//***********************����ģ��*************************
	int twoday[2][12] = { {31,28,31,30,31,30,31,31,30,31,30,31},
					  {31,29,31,30,31,30,31,31,30,31,30,31} };
	int allyears[5] = { 364,365,365,366,365 };
	int mouth, day, year, result;
	int test;
	int answer_a;
	srand(time(NULL));
	answer_a = rand() % 30 + 1;
	//******************************************************************
	// 
	// 
	// 
	//**************************    ����ģ��     *************************************
	printf("�������ڵ����\n");
	do {
		scanf_s("%d", &year);
	} while (year <= 2020);
	if (year > 2021 && year < 2025)
	{
		test = year - 2021;
		printf("̫���˰£�����%d�������ٽ���������Ҫ������\n", test);
	}
	if (year > 2025) {
		test = year - 2021;
		printf("С��������Ŀǰֻ��Ƶ���2025���أ���������%d���أ�ϣ�����ǿ���һֱ�ߵ� %d�����ͣ�����\n", test, year);
		goto last;
	}
	printf("�������ڵ��·�\n");
	do {
		scanf_s("%d", &mouth);
	} while (mouth > 12 || mouth < 0);
	printf("�������ڵ�����\n");
	do {
		scanf_s("%d", &day);
	} while (day < 0 || day > 32);
	//*************************     ����ģ��    **************************************
	//
	//
	result = allday(twoday, allyears, mouth, day, year, 2021, 6, 2);//�ж�����
	put(result, year, mouth, day, answer_a);
last:
	system("pause");
	return 0;
}
//���ʱ���жϺ���
int allday(int day[][12], int allyears[5], int mouth, int days, int years, int startyears, int startmouths, int startdays)
{
	int total = 0, flag, test = 0, i = 0, hh;
	if (((years % 4 == 0) && (years % 100 != 0)) || (years % 400 == 0))
	{
		for (flag = 0; flag < mouth; flag++) {
			total += day[1][flag];
		}
		flag = flag - 1;
		total -= day[1][flag];
		total += days;
		if (years == 2021) {
			total -= 153;
		}
		if (years > 2021) {
			total = 0;
			test = years - 2021;
			for (i; i < test - 1; i++) {
				total += allyears[i];
			}
			for (flag = 0; flag < mouth; flag++) {
				total += day[1][flag];
			}
			flag = flag - 1;
			total -= day[1][flag];
			total += days;
			total += 211;

		}
		return total;
	}
	else {

		for (flag = 0; flag < mouth; flag++) {
			total += day[0][flag];
		}
		flag = flag - 1;
		total -= day[0][flag];
		total += days;
		if (years == 2021) {
			total -= 153;
		}
		if (years > 2021) {
			total = 0;
			test = years - 2021;
			for (i; i < test - 1; i++) {
				total += allyears[i];
			}
			for (flag = 0; flag < mouth; flag++) {
				total += day[1][flag];
			}
			flag = flag - 1;
			total -= day[1][flag];
			total += days;
			total += 211;

		}
		return total;
	}
}
//������״
void heart(void) {
	{
		for (float y = 1.5; y > -1.5; y -= 0.1) {
			for (float x = -1.5; x < 1.5; x += 0.04) {
				float a = x * x + y * y - 1;
				putchar(a * a * a - x * x * y * y * y <= 0.0 ? '*' : ' ');
			}
			putchar('\n');
		}
		printf("\n\n\n");
	}
	printf("it's for you CZX\n");
}//����
void anniversary(void) {
	printf("����˵˵��һֱ������Ը��\n");
	printf("ϣ����������ͳһ�����ٸ�ǿ\n");
	printf("ϣ����ĸ���彡��\n");
	printf("��Ȼ�������ڻ�Ҫ���ϸ��㣬����������ϣ���ʹ������þ�\n");
	printf("һ��ǰ�Ľ���������һ������\n");
	printf("ʱ�������Ŀ�ѽ��ת��һ������\n");
	printf("����ʲô������������һ�𿸣������ȥ������\n");
	printf("������һ�װ����Ź���\n");
}//�������
void love(void) {
	printf("��ϲ�������������С�ʵ��أ�������������Ӵ\n");
	printf("�Һ���˵໣���һֱ���������Ǽ����������\n");
	printf("����ĳ�̶ֳ��ϣ��᲻�Ծ��ػ�ԭ��ͯ��ı�̬��\n");
	printf("��������ʱ���㲻֪�������Ǹ����ӣ�ʲôʱ��ͻ�ĳ���\n");
	printf("����Ʋ�ס��Ҳ���Կ��ơ�\n");
	printf("�ں���̸������ʱ����������������ָ�������ֵֹ�С����\n");
	printf("����˵̸���Է�����£��Ҿ����������ϲ����ʲô����ǰ�Թ�ʲô�óԵ�\n");
	printf("�������κ�ϸ֦ĩ���Ҷ�������ζ�ĺ������\n");
	printf("��˵��ε���˼��\n");
	printf("�Ҹо�����ķ���ʲ��ǲ�������ĮȻ��������������ʧȥ����Է�����ë��Ƥ��С�µ�ʱ��\n");
	printf("�����Ǽ�������Ķ�����ʱ��û����������������\n");
	printf("������������£����������ĵ�Ӧ�������������а�\n");
	printf("�����Ѿ���һ��һ����ˣ��϶������ܣ��϶�һ��Թ������϶�һ�𿴹���Ӱ\n");
	printf("�϶������󲿷������������¡�\n");
	printf("ϣ�����ǿ��Ծ������࣬�߸�����·\n");
	printf("ϣ�����ǿ��Ա���סһ��ʼ�����飬������Է������Σ�������֣�ӵ����ʹ��\n");
	printf("Ҳ�ܸ������Ǹ�ʱ����������㰡��û����ǰ�����ɣ�Ҳ������̫�����죬Ӧ�ÿ���˵��õ�ʱ����������ɣ�����������\n");
	printf("��˵����������ٶ�����̫��ı����ˣ���֪����ٶ����������ʲô����\n");
	printf("���������Ӧ�ù��˰ɣ��ҵı��֤��Ӧ���õ��˰ɣ����ǵ�ʱ���ƻ�������Ŭ��ʵ����\n");
	printf("���ǻ���һ�������ֻ᲻�ῴ����Щ���أ�\n");
	printf("��ЩҲ��˵�ˣ������һ���黰����\n\n\n");
	printf("�������������ģ�����ɸɾ��������������ҵ����ϣ���̫����������\n\n\n");
	heart();
}//520
void hundred(void) {
	printf("С��������䣬�������ʵ������滹����Ŷ��С����\n");
	printf("������һ������������Ӧ�þ����˲��ٰɣ���������������Ӧ�ø��Ӽᶨ������ȥ�ľ��ģ����������\n");
	printf("ϣ�������ҿ���һ������ֵֹ�����һ��Ӧ�����ĸ��㿴\n");
	printf("ϣ��������Ȼ�м����ſ�ϲ�ͳ嶯�Լ����Կ��Ƶķ�������\n");
	printf("������գ��ۿ��ģ��ٸ���һ�㰮�ģ���ɫ������ģ��ɲ��������Ŷ����˵��\n");
	color_love();
}//����
void random(int hhh) {
	printf("ÿ��Сɧ����\n");
	srand(time(NULL));
	switch (hhh) {
	case 1:printf("�Ҵ�Լ���û��ʲô�Ż���ֻ����Ϊ���Ҽ������㣬�������ӹ�������в�ƾ��������Щ������\n");
		break;
	case 2:printf("�����㲢�Һ�����һ�������̫�����ˣ�������ڣ�ȴ���ĺ����磬 �п�ӯ���п��١�\n");
		break;
	case 3:printf("ϲ������ϲ�������������ܹ��ݿ������̣��ҰͲ���һ�����ͳ���ʲô�������㣬·������С����ҲҪ�ĸ��㿴��\n");
		break;
	case 4:printf("�Ȱ��������Ҫ��������\n");
		break;
	case 5:printf("���Һ�ϲ�����أ�ֻ֪��Ŀǰϲ����ĳ̶ȣ�����������ϲ����������������޷��󼰵ġ����ǵ�һ����ңң���ȡ�\n");
		break;
	case 6:printf("����ķ�˿��ָ�䣬���ÿһ���Ҷ���ռ�С�����������������ʮ�����ݡ��ƻ��ݡ�\n");
		break;
	case 7:printf("��Ϳ���������ÿ�춼�ԣ�����ܲ���ÿ�춼���������㣬���һ��Ҫ�ظ��ö�Ρ�ûƭ�㣬������ġ�\n");
		break;
	case 8:printf("�������:ʱ���ĵ�ǣ�����������������ɵ�ƫ��������ÿ�춼��˵���������\n");
		break;
	case 9:printf("������ʼ�ϲ�����������Ҳ����ͻ�������Ļ�ϲ��\n");
		break;
	case 10:printf("���ܹ鳳�ܣ�ϲ�����ϲ���㣬�������ĸ�����ֻҪ������֣��Ҿͻ�һֱ�����ȥ��\n");
		break;
	case 11:printf("��Щ��ϲ��������Ϊ���ܸ����������֣�����ϲ���㣬����Ϊ������ҵĿ��֡�\n");
		break;
	case 12:printf("���Ƿǳ��ǳ��ǳ��ɰ����ˣ���Ӧ��������õ��ˣ���Ҳ��ϣ���Ҿ��ǡ�\n");
		break;
	case 13:printf("�������ҵ�ʱ���Ҵ�δ��Ľ���κ��ˡ�\n");
		break;
	case 14:printf("����ɰ�����˵ʱ������˼������˼��֮�󣬻�������˵��\n");
		break;
	case 15:printf("���ǳ�¶�������ǣ�����һ�еĻ�ϲ��\n");
		break;
	case 16:printf("������ϲ���������㶼�У����������е������Ҷ�ϲ����\n");
		break;
	case 17:printf("��ǧǧ�������������㣬���㻨�����������Ҷ���֮����\n");
		break;
	case 18:printf("�����һ���¹��������ҵ����ϣ�ӳ������ҹ�����������\n");
		break;
	case 19:printf("�����кö���������ĵ����������㡣\n");
		break;
	case 20:printf("��ʹ����û��ô���ף��һ�����������δ���һ����ϲ�� ��Ϊ����������\n");
		break;
	case 21:printf("��ô��û�����£���һֱ��������֡�\n");
		break;
	case 22:printf("û�����������������һ�¶������ѹ���\n");
		break;
	case 23:printf("ʱ�������㣬Խ��ƽ������飬Խ�ǳ��� ��\n");
		break;
	case 24:printf("����ÿ����� ��ʱ��ϵ����֪���㲻���� ��֪����һֱ�ڣ��໥��� ����æµ�����ž�����õ������ɡ�\n");
		break;
	case 25:printf("�Ҿ�����õ�״̬�ǣ����ʱ������������ʱ���¶�\n");
		break;
	case 26:printf("��˵ɵ�ᴫȾ���ұ�ɵ֮��᲻�ỹ�Ǻ�ϲ�����أ��Ҿ��ÿ϶��ᣡ��������\n");
		break;
	case 27:printf("��Ӧ�ò��������Ӧ�ò������\n");
		break;
	case 28:printf("��ϲ���㣬���Ҷ��ҵļ���\n");
		break;
	case 29:printf("ϲ���㣬������ʣ��쾭���壬����ôק�\n");
		break;
	case 30:printf("�Ҿ��ý������ǵ�һ��������ˣ�������ǣ���ô���ⲻ����ÿ�����㣬����һ����\n");
		break;
	}
	printf("\n\n\n");
}
void put(int results, int years, int mouths, int days, int answer_b) {
	if (results < 0)
		printf("���������������\n");
	printf("�Һ���һ����һ���� %d ����\n\n\n\n", results);
	random(answer_b);
	if (results == 30) {
		printf("������һ��һ�������أ������ȥ��\n");
		thirty();
	}
	if (results == 100) {
		hundred();
	}
	if (results == 520) {
		love();

	}
	if (years == 2022 && mouths == 6 && days == 2) {
		anniversary();
	}
	if (mouths = 11 && days == 17) {
		birthday();
	}
	if (days == 19) {
		printf("������ �����ˮ���չ˺��Լ�Ŷ.");
	}
	if (mouths == 3 && days == 20) {
		printf("�����Ǵ����أ���������\n");
	}
	if (mouths == 9 && days == 23) {
		printf("�������⼸��ע����ϻ�����ת�������м�\n");
	}
	if (mouths == 12 && days == 21) {
		printf("����������С�������ǲ���Ӧ�ö౧��ѽ������������\n");
		printf("�����㴩��ô�񣬱�����ʲô�о�ѽ����ôôôô�����ٲ���������˹���\n");
		printf("�⼸��ע������ѽ�����ð�ˣ�ע����Ϣ�����ˮ\n");
	}

}//�ؼ�ģ��
//�ؼ�ģ�飬�����޸ġ�
void thirty(void) {
	printf("��С�������װ��ģ�������������Щ������δ�����Ŷ��������\n");
	printf("���ǣ�������������ô�䣬������������ĵ�λ��Ȼ����Ҫ��\n");
	printf("��Ҳ�ᾡ��ȫ����ά�����ǵ���θ��飬��������\n");
	printf("�����������������һЩ�ط����ܻ��������������㲻���\n");
	printf("�������ʱ���������������������ú����ģ���һ�������ĸ�����\n\n");
	printf("���Ӧ�����㴥���ĵ�һ���ɣ�����������ʵ����Ĳʵ��������������˼����ȫ��������\n");
	printf("ֻ���Ҿ��ã�����д�Ļ������Ժ����ó�������Ӧ�ø��ио�\n");
	printf("�ھ����˺ܶ���������ǵ��ദ��ʽ���ܻ�䣬����Ƶ�ʿ��ܻ��\n");
	printf("���ǣ�������д����Щ��ʱ��ע�ĸ��鲻��䣬������ĸ��鲻���\n");
	printf("����Ժ�����������ʱ�����ǣ�Ӧ�ú�����˼�ɣ�������δ������ѽ������\n");
	printf("�������һ�������أ���֪�������ܲ��ܺ�����Լ�ϻᣬ�ܸо����æѽ���ֽӽ���ĩ�����ָ�æ�ˣ���\n");
	printf("Ҫ�ǽ���Լ�ϻ��ˣ��ͱ�����\n");
	printf("ûԼ�ϣ��Ǿ�˳�����߱�����\n");
	printf("\n");
	printf("����������ɵ�ϡ�\n");
}
void birthday(void) {
	printf("�������������������أ�С���������տ��֣�����\n");
	printf("�����Һ���һ����ĵ�һ����Ŷ���������Ԥ�����������Ҳ��\n");
	printf("����������ק��ק��С����\n");
	printf("��ϵ�ϣ�����ǿ���һֱ����ȥ��������ô�ѣ�һ���˸���ô��ѽ\n");
	printf("�ҵ�ȷ��ֱ��ֻ����Ϊ�������������㣬��ƽӹ��������������˺ö�������\n");
	printf("��󲻹���ô˵���������ȹ�����ĺĺ\n\n\n\n");
	printf("�뿴����Ц\n���������\n����������������һ��\n��Ŭ����Ϊ��Ľ���\n\
�ѳ�ŵÿ���鶼����\n�뱻��ӵ��\n�����㵲ס���������\n���������һ������\n�������㱻�˵��ֺ�");
	ily();
	printf("���տ��֣�����������������\n");
}
void ily(void) {
	int x, z, y;
	for (double y = 2.5; y >= -1.6; y = y - 0.2)
	{
		for (double x = -3; x <= 4.8; x = x + 0.1)
		{
			(pow((x * x + y * y - 1), 3) <= 3.6 * x * x * y * y * y
				|| (x > -2.4 && x < -2.1 && y<1.5 && y>-1)
				|| (((x < 2.5 && x>2.2) || (x > 3.4 && x < 3.7)) && y > -1 && y < 1.5)
				|| (y > -1 && y < -0.6 && x < 3.7 && x>2.2)) ? printf("*") : printf(" ");
		}

		printf("\n");
	}

	getchar();
}
void color_love(void) {
	float y, x, z, f;
	for (y = 1.5f; y > -1.5f; y -= 0.1f)
	{
		for (x = -1.5f; x < 1.5f; x += 0.05f)
		{
			z = x * x + y * y - 1;
			f = z * z * z - x * x * y * y * y;
			putchar(f <= 0.0f ? "*********"[(int)(f * -8.0f)] : ' ');
		}
		putchar('\n');
	}
	long time;
	for (; ;)
	{
		system("color a");
		for (time = 0; time < 99999999; time++);
		system("color b");
		for (time = 0; time < 99999999; time++);
		system("color c");
		for (time = 0; time < 99999999; time++);
		system("color d");
		for (time = 0; time < 99999999; time++);
		system("color e");
		for (time = 0; time < 99999999; time++);
		system("color f");
		for (time = 0; time < 99999999; time++);
		system("color 0");
		for (time = 0; time < 99999999; time++);
		system("color 1");
		for (time = 0; time < 99999999; time++);
		system("color 2");
		for (time = 0; time < 99999999; time++);
		system("color 3");
		for (time = 0; time < 99999999; time++);
		system("color 4");
		for (time = 0; time < 99999999; time++);
		system("color 5");
		for (time = 0; time < 99999999; time++);
		system("color 6");
		for (time = 0; time < 99999999; time++);
		system("color 7");
		for (time = 0; time < 99999999; time++);
		system("color 8");
		for (time = 0; time < 99999999; time++);
		system("color 9");
	}
}