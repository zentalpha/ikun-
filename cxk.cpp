#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
void printWithDelay(const char* str, int delay_ms) {
	// 遍历字符串中的每一个字符
	for (int i = 0; str[i] != '\0'; i++) {
		putchar(str[i]);           // 输出当前字符
		fflush(stdout);            // 强制刷新输出缓冲区
		Sleep(delay_ms);		// Windows下延迟 (单位：毫秒)
	}
	}
int main()
{
	int a = 0;
	printWithDelay("全民制作人们大家好，我是练习时长两年半的个人练习生蔡徐坤\n",50);
	printWithDelay("喜欢 唱，跳，rap，篮球\n",100);
	printWithDelay("muisc~~~~~\n",30);
	printWithDelay("我的表演结束了，现在请你回答我几个问题，测试你是否为真ikun\n",30);
	printWithDelay("问题1：两年半是多少天？（假定一天为365天）\n",20);
	float days = 912.5, i;
	scanf_s("%f", &i);
	printWithDelay("加载中......\n", 100);
	if (i == days)
	{
		printWithDelay("回答正确！你真是太聪明啦!!!\n", 20);
		a += 1;
	}
	else
	{
		printWithDelay("回答错误！你真是该去练个两年半呐！\n", 20);
	}
	printWithDelay("问题2：鸽鸽在几几年担任了《青春有你》的全民制作人\n",20);
	printWithDelay("(只用写数字就行)\n",20);
	int year = 2018, p;
	scanf_s("%d", &p);
	printWithDelay("加载中......\n", 100);
	if (p == year)
	{
		printWithDelay("回答正确！你真是太厉害啦！鸽鸽奖励你一个鸡蛋！\n",20);
		a += 1;
	}
	else
	{
		printWithDelay("回答错误！你真是该去再练个两年半呐！\n",20);
	}
	printWithDelay("问题3：鸽鸽出道时，最火的歌曲？\n",20);
	char music[20] = "只因你太美", m[20];
	scanf_s("%s", m, 20);
	printWithDelay("加载中......\n", 100);
	if (strcmp(m, music) == 0)
	{
		printWithDelay("回答正确！鸽鸽奖励你最好听的新歌《Dead man》！\n",20);
		system("start https://www.bilibili.com/video/BV1xg76zSErE/?vd_source=ffb937c843da579416c734defd7270be");
		a += 1;
	}
	else
	{
		printWithDelay("回答错误！鸽鸽出道时最火的歌曲是《只因你太美》！\n",20);
		system("start https://www.bilibili.com/video/BV1J4411v7g6/?vd_source=ffb937c843da579416c734defd7270be");
	}
	printWithDelay("问题4:鸽鸽最厉害的招式是什么？\n",20);
	char skill[20] = "铁山靠", s[20];
	scanf_s("%s", s, 20);
	printWithDelay("加载中......\n", 100);
	if (strcmp(s, skill) == 0)
	{
		printWithDelay("回答正确！鸽鸽给你拜年啦！\n", 20);
		system("start https://www.bilibili.com/video/BV1JkYNexEE4/?share_source=copy_web&vd_source=d030ead90d4baf43ff0a02bbabd5e099&t=9");
		a += 1;
	}
	else
	{
		printWithDelay("回答错误！鸽鸽最厉害的招式是铁山靠哦~这都不知道，那我要让鸽鸽给你拜年了\n", 20);
		system("start https://www.bilibili.com/video/BV1JkYNexEE4/?share_source=copy_web&vd_source=d030ead90d4baf43ff0a02bbabd5e099&t=9");
	}
	printWithDelay("问题5:鸽鸽在2025年8月8日发布了哪首新歌(注意区分大小写，第一个字母大写，后面小写)\n",20);
	char newm[20] = "Jasmine", n[20];
	scanf_s("%s", n, 20);
	printWithDelay("加载中......\n", 100);
	if (strcmp(newm, n) == 0)
	{
		printWithDelay("回答正确！鸽鸽奖励你4K高清版Jasmine\n",20);
		system("start https://www.bilibili.com/video/BV1mrt1zFEB8/?vd_source=ffb937c843da579416c734defd7270be");
		a += 1;
	}
	else
	{
		printWithDelay("回答错误，罚你请陈宝吃一顿KFC\n",20);
		system("start https://order.kfc.com.cn/preorder-taro/home?portalSource=BrandWap");
	}
	printWithDelay("恭喜你，你已经完成了测试\n", 30);
	printWithDelay("现在开始综合评估...\n", 50);
	printWithDelay("你一共答对了", 30);
	printf("%d", a);
	printWithDelay("个问题\n", 30);
	if (a == 5)
	{
		printWithDelay("你是尊贵的五星级ikun，真令人佩服\n",30);
		printWithDelay("现在我要奖励你请陈宝吃KFC\n", 30);
		system("start https://order.kfc.com.cn/preorder-taro/home?portalSource=BrandWap");
	}
	else
	{
		if (a == 4)
		{
			printWithDelay("你是四星级ikun，真不错呐\n", 30);
			printWithDelay("现在我要奖励你请陈宝吃KFC\n", 30);
			system("start https://order.kfc.com.cn/preorder-taro/home?portalSource=BrandWap");
		}
		if (a == 3)
		{
			printWithDelay("你是三星级ikun，仍需努力\n", 30);
			printWithDelay("既然仍需努力，为什么补不请陈宝吃KFC\n", 30);
			system("start https://order.kfc.com.cn/preorder-taro/home?portalSource=BrandWap");
		}
		if (a == 2)
		{
			printWithDelay("你是二星级ikun，有没有实力啊，你不会是小黑子吧\n", 30);
			printWithDelay("为了洗清嫌疑，你要请陈宝吃KFC\n", 30);
			system("start https://order.kfc.com.cn/preorder-taro/home?portalSource=BrandWap");
		}
		if (a == 1)
		{
			printWithDelay("你是一星级ikun，真是太菜了，有小黑子嫌疑\n", 30);
			printWithDelay("为了洗清嫌疑，你要请陈宝吃KFC\n", 30);
			system("start https://order.kfc.com.cn/preorder-taro/home?portalSource=BrandWap");
		}
		if (a == 0)
		{
			printWithDelay("你不是ikun，你个小黑子\n", 30);
			printWithDelay("你这么黑，必须请陈宝吃KFC\n", 30);
			system("start https://order.kfc.com.cn/preorder-taro/home?portalSource=BrandWap");
		}
	}
	printf("评测已完成，按下任意键退出...");
	getchar();
	getchar();
	return 0;
}

