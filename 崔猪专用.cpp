#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
//我想想看，除了分手这个原因，我应该没有其他的理由把源码发给你了吧，
//不管什么原因，感谢你的陪伴，祝安好！！！
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
{//***********************定义模块*************************
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
	//**************************    输入模块     *************************************
	printf("输入现在的年份\n");
	do {
		scanf_s("%d", &year);
	} while (year <= 2020);
	if (year > 2021 && year < 2025)
	{
		test = year - 2021;
		printf("太棒了奥，超过%d年啦，再接再厉，不要放弃。\n", test);
	}
	if (year > 2025) {
		test = year - 2021;
		printf("小笨蛋，我目前只设计到了2025年呢，猪猪超过了%d年呢，希望我们可以一直走到 %d，加油！！！\n", test, year);
		goto last;
	}
	printf("输入现在的月份\n");
	do {
		scanf_s("%d", &mouth);
	} while (mouth > 12 || mouth < 0);
	printf("输入现在的日期\n");
	do {
		scanf_s("%d", &day);
	} while (day < 0 || day > 32);
	//*************************     输入模块    **************************************
	//
	//
	result = allday(twoday, allyears, mouth, day, year, 2021, 6, 2);//判定日期
	put(result, year, mouth, day, answer_a);
last:
	system("pause");
	return 0;
}
//年份时间判断函数
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
//爱心形状
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
}//爱心
void anniversary(void) {
	printf("和你说说我一直以来的愿望\n");
	printf("希望国家早日统一，繁荣富强\n");
	printf("希望父母身体健康\n");
	printf("当然啦，现在还要加上个你，哈哈哈哈，希望和崔猪长长久久\n");
	printf("一年前的今天我们在一起了呢\n");
	printf("时间过的真的快呀，转眼一年了呢\n");
	printf("遇到什么困难我们两个一起扛，坚持下去。。。\n");
	printf("再送你一首安河桥哈哈\n");
}//周年纪念
void love(void) {
	printf("恭喜猪猪，触发了这个小彩蛋呢，嘻嘻嘻，爱你哟\n");
	printf("我和你说嗷，我一直觉得恋爱是件神奇的事情\n");
	printf("爱在某种程度上，会不自觉地还原人童真的本态，\n");
	printf("在恋爱的时候，你不知道心里那个孩子，什么时候就会蹦出来\n");
	printf("你控制不住，也难以控制。\n");
	printf("在和你谈恋爱的时候，我总想和你分享各种各样奇奇怪怪的小事情\n");
	printf("比如说谈到吃饭这件事，我就想告诉你我喜欢吃什么，以前吃过什么好吃的\n");
	printf("就算是任何细枝末节我都想津津有味的和你分享\n");
	printf("我说这段的意思是\n");
	printf("我感觉爱情的反义词不是不爱，是漠然，在我们两个人失去了向对方分享鸡毛蒜皮的小事的时候\n");
	printf("在我们见到好玩的东西的时候没有向你分享的欲望。\n");
	printf("在这样的情况下，最让人伤心的应该是那种无力感吧\n");
	printf("我们已经在一起一年多了，肯定吵过架，肯定一起吃过饭，肯定一起看过电影\n");
	printf("肯定做过大部分情侣做过的事。\n");
	printf("希望我们可以经历更多，走更长的路\n");
	printf("希望我们可以保持住一开始的热情，可以向对方分享点滴，分享快乐，拥抱伤痛。\n");
	printf("也很高兴在那个时间段遇见了你啊，没有以前的幼稚，也不至于太过成熟，应该可以说最好的时间遇到了你吧，哈哈哈哈。\n");
	printf("话说回来，这五百多天有太多的变数了，不知道五百多天后我们是什么样子\n");
	printf("你的四六级应该过了吧，我的编程证书应该拿到了吧，我们当时所计划的正在努力实现吗\n");
	printf("我们还在一起吗，你又会不会看到这些话呢？\n");
	printf("这些也不说了，最后送一句情话给你\n\n\n");
	printf("这个世界乱糟糟的，而你干干净净，可以悬在我的心上，作太阳和月亮。\n\n\n");
	heart();
}//520
void hundred(void) {
	printf("小笨蛋，夸夸，第三个彩蛋，后面还会有哦，小宝宝\n");
	printf("我们在一起三个月啦，应该经历了不少吧，哈哈，相信我们应该更加坚定了走下去的决心，别放弃啊。\n");
	printf("希望现在我看见一颗奇奇怪怪的树第一反应还是拍给你看\n");
	printf("希望对你依然有夹杂着狂喜和冲动以及难以控制的分享欲望\n");
	printf("今天百日，咱开心，再给你一点爱心，颜色是随机的，可不是我配的哦，别说丑\n");
	color_love();
}//百日
void random(int hhh) {
	printf("每日小骚话：\n");
	srand(time(NULL));
	switch (hhh) {
	case 1:printf("我大约真的没有什么才华，只是因为有幸见着了你，于是这颗庸常的心中才凭空生出好些浪漫。\n");
		break;
	case 2:printf("遇到你并且和你在一起这件事太美妙了，三缄其口，却又四海生风， 有亏盈，有枯荣。\n");
		break;
	case 3:printf("喜欢就是喜欢，哪来的欲擒故纵克制隐忍，我巴不得一日三餐吃了什么都告诉你，路上遇见小松鼠也要拍给你看。\n");
		break;
	case 4:printf("热爱的事情便要做到极致\n");
		break;
	case 5:printf("猪，我很喜欢你呢，只知道目前喜欢你的程度，是其余所有喜爱的事物加起来都无法企及的。你是第一，且遥遥领先。\n");
		break;
	case 6:printf("从你的发丝到指间，你的每一寸我都想占有。爱哪里是神殿，分明是十里扬州、灯火不休。\n");
		break;
	case 7:printf("早餐可能来不及每天都吃，书可能不会每天都看，但想你，真的一天要重复好多次。没骗你，这是真的。\n");
		break;
	case 8:printf("我想给你:时常的惦记，温柔的语气，无理由的偏爱，而且每天都想说的明天见。\n");
		break;
	case 9:printf("你是我始料不及的遇见，也是我突如其来的欢喜。\n");
		break;
	case 10:printf("吵架归吵架，喜欢你归喜欢你，我们用心付出，只要不提分手，我就会一直坚持下去，\n");
		break;
	case 11:printf("有些人喜欢你是因为你能给他带来快乐，而我喜欢你，是因为你就是我的快乐。\n");
		break;
	case 12:printf("你是非常非常非常可爱的人，真应该遇到最好的人，我也真希望我就是。\n");
		break;
	case 13:printf("你陪着我的时候，我从未羡慕过任何人。\n");
		break;
	case 14:printf("你最可爱，我说时来不及思索。而思索之后，还是这样说。\n");
		break;
	case 15:printf("你是朝露，是晚星，是我一切的欢喜。\n");
		break;
	case 16:printf("不是我喜欢的样子你都有，而是你所有的样子我都喜欢。\n");
		break;
	case 17:printf("于千千万万人中遇见你，就算花光所有运气我都甘之如饴\n");
		break;
	case 18:printf("你就像一缕月光撒在了我的心上，映亮了夏夜，送来了清秋。\n");
		break;
	case 19:printf("他们有好多关于恋爱的道理，而我有你。\n");
		break;
	case 20:printf("纵使生活没那么容易，我还是想把你放在未来里，一生欢喜， 不为世俗所及。\n");
		break;
	case 21:printf("怎么会没有心事，那一直是你的名字。\n");
		break;
	case 22:printf("没有你这三个字随便想一下都觉得难过。\n");
		break;
	case 23:printf("时间会告诉你，越是平常的陪伴，越是长久 。\n");
		break;
	case 24:printf("不用每天缠绵 随时联系，我知道你不会走 你知道我一直在，相互惦记 各自忙碌，这大概就是最好的恋爱吧。\n");
		break;
	case 25:printf("我觉得最好的状态是，陪伴时不依附，独处时不孤独\n");
		break;
	case 26:printf("你说傻会传染，我变傻之后会不会还是很喜欢你呢，我觉得肯定会！！！！！\n");
		break;
	case 27:printf("龙应该藏在云里，你应该藏在心里。\n");
		break;
	case 28:printf("我喜欢你，是我独家的记忆\n");
		break;
	case 29:printf("喜欢你，不用落笔，天经地义，就这么拽嗷\n");
		break;
	case 30:printf("我觉得今天我是第一个想你的人，如果不是，那么问题不大，我每天想你，总有一天是\n");
		break;
	}
	printf("\n\n\n");
}
void put(int results, int years, int mouths, int days, int answer_b) {
	if (results < 0)
		printf("输入错误啦，憨包\n");
	printf("我和你一共走一起了 %d 天呢\n\n\n\n", results);
	random(answer_b);
	if (results == 30) {
		printf("你们走一起一个月了呢，坚持下去。\n");
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
		printf("笨蛋猪， 多喝热水，照顾好自己哦.");
	}
	if (mouths == 3 && days == 20) {
		printf("今天是春分呢，别着凉啦\n");
	}
	if (mouths == 9 && days == 23) {
		printf("笨蛋，这几天注意别上火，天气转凉啦，切记\n");
	}
	if (mouths == 12 && days == 21) {
		printf("冬天来啦，小憨猪，咱是不是应该多抱抱呀，哈哈哈哈，\n");
		printf("冬天你穿这么厚，抱着是什么感觉呀，额么么么么，至少不会搁着疼了哈哈\n");
		printf("这几天注意身体呀，别感冒了，注意休息，多喝水\n");
	}

}//关键模块
//关键模块，谨慎修改。
void thirty(void) {
	printf("猪，小宝贝，亲爱的，憨猪，笨蛋，这些都是你滴代名词哦，嘻嘻嘻\n");
	printf("但是！！！不管这怎么变，你在我心里面的地位依然很重要。\n");
	printf("我也会尽我全力来维护我们的这段感情，嘻嘻嘻。\n");
	printf("但是人无完人嘛，我有一些地方可能会惹你生气，让你不舒服\n");
	printf("猪猪这个时候别放弃啊，我们坐下来好好聊聊，我一定会上心改正滴\n\n");
	printf("这个应该是你触发的第一个吧，嘻嘻嘻，其实后面的彩蛋都可以在猪猪的思考下全部触发滴\n");
	printf("只是我觉得，现在写的话放在以后再拿出来看，应该更有感觉\n");
	printf("在经历了很多事情后，我们的相处方式可能会变，见面频率可能会变\n");
	printf("但是！我现在写下这些话时倾注的感情不会变，对猪猪的感情不会变\n");
	printf("许久以后，再来看看当时的我们，应该很有意思吧，哈哈，未来可期呀！！！\n");
	printf("今天就是一个月了呢，不知道今天能不能和猪猪约上会，总感觉你好忙呀，又接近期末，你又更忙了，哎\n");
	printf("要是今天约上会了，就抱抱猪\n");
	printf("没约上，那就顺着网线抱抱猪\n");
	printf("\n");
	printf("哈哈哈哈，傻瓜。\n");
}
void birthday(void) {
	printf("臭宝，今天是你生日呢，小笨蛋，生日快乐！！！\n");
	printf("这是我和你一起过的第一生日哦，明年的我预定啦，后年的也是\n");
	printf("哈哈哈哈，拽不拽，小憨包\n");
	printf("真诚的希望我们可以一直走下去，生活这么难，一个人该怎么办呀\n");
	printf("我的确很直，只是因为我有幸遇见了你，我平庸的心里面才生出了好多浪漫，\n");
	printf("最后不管怎么说，我想和你度过朝朝暮暮\n\n\n\n");
	printf("想看着你笑\n想和你撒娇\n想陪你漫漫人生走一遭\n想努力成为你的骄傲\n\
把承诺每事情都做好\n想被你拥抱\n想陪你挡住世界的喧嚣\n想让你感受一切美妙\n不再让你被伤到分豪");
	ily();
	printf("生日快乐！！！！！！！！！\n");
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