#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
void printWithDelay(const char* str, int delay_ms) {
	// �����ַ����е�ÿһ���ַ�
	for (int i = 0; str[i] != '\0'; i++) {
		putchar(str[i]);           // �����ǰ�ַ�
		fflush(stdout);            // ǿ��ˢ�����������
		Sleep(delay_ms);		// Windows���ӳ� (��λ������)
	}
	}
int main()
{
	int a = 0;
	printWithDelay("ȫ���������Ǵ�Һã�������ϰʱ�������ĸ�����ϰ��������\n",50);
	printWithDelay("ϲ�� ��������rap������\n",100);
	printWithDelay("muisc~~~~~\n",30);
	printWithDelay("�ҵı��ݽ����ˣ���������ش��Ҽ������⣬�������Ƿ�Ϊ��ikun\n",30);
	printWithDelay("����1��������Ƕ����죿���ٶ�һ��Ϊ365�죩\n",20);
	float days = 912.5, i;
	scanf_s("%f", &i);
	printWithDelay("������......\n", 100);
	if (i == days)
	{
		printWithDelay("�ش���ȷ��������̫������!!!\n", 20);
		a += 1;
	}
	else
	{
		printWithDelay("�ش���������Ǹ�ȥ����������ţ�\n", 20);
	}
	printWithDelay("����2������ڼ����굣���ˡ��ഺ���㡷��ȫ��������\n",20);
	printWithDelay("(ֻ��д���־���)\n",20);
	int year = 2018, p;
	scanf_s("%d", &p);
	printWithDelay("������......\n", 100);
	if (p == year)
	{
		printWithDelay("�ش���ȷ��������̫����������뽱����һ��������\n",20);
		a += 1;
	}
	else
	{
		printWithDelay("�ش���������Ǹ�ȥ������������ţ�\n",20);
	}
	printWithDelay("����3��������ʱ�����ĸ�����\n",20);
	char music[20] = "ֻ����̫��", m[20];
	scanf_s("%s", m, 20);
	printWithDelay("������......\n", 100);
	if (strcmp(m, music) == 0)
	{
		printWithDelay("�ش���ȷ����뽱������������¸衶Dead man����\n",20);
		system("start https://www.bilibili.com/video/BV1xg76zSErE/?vd_source=ffb937c843da579416c734defd7270be");
		a += 1;
	}
	else
	{
		printWithDelay("�ش���󣡸�����ʱ���ĸ����ǡ�ֻ����̫������\n",20);
		system("start https://www.bilibili.com/video/BV1J4411v7g6/?vd_source=ffb937c843da579416c734defd7270be");
	}
	printWithDelay("����4:�������������ʽ��ʲô��\n",20);
	char skill[20] = "��ɽ��", s[20];
	scanf_s("%s", s, 20);
	printWithDelay("������......\n", 100);
	if (strcmp(s, skill) == 0)
	{
		printWithDelay("�ش���ȷ���������������\n", 20);
		system("start https://www.bilibili.com/video/BV1JkYNexEE4/?share_source=copy_web&vd_source=d030ead90d4baf43ff0a02bbabd5e099&t=9");
		a += 1;
	}
	else
	{
		printWithDelay("�ش���󣡸������������ʽ����ɽ��Ŷ~�ⶼ��֪��������Ҫ�ø����������\n", 20);
		system("start https://www.bilibili.com/video/BV1JkYNexEE4/?share_source=copy_web&vd_source=d030ead90d4baf43ff0a02bbabd5e099&t=9");
	}
	printWithDelay("����5:�����2025��8��8�շ����������¸�(ע�����ִ�Сд����һ����ĸ��д������Сд)\n",20);
	char newm[20] = "Jasmine", n[20];
	scanf_s("%s", n, 20);
	printWithDelay("������......\n", 100);
	if (strcmp(newm, n) == 0)
	{
		printWithDelay("�ش���ȷ����뽱����4K�����Jasmine\n",20);
		system("start https://www.bilibili.com/video/BV1mrt1zFEB8/?vd_source=ffb937c843da579416c734defd7270be");
		a += 1;
	}
	else
	{
		printWithDelay("�ش���󣬷�����±���һ��KFC\n",20);
		system("start https://order.kfc.com.cn/preorder-taro/home?portalSource=BrandWap");
	}
	printWithDelay("��ϲ�㣬���Ѿ�����˲���\n", 30);
	printWithDelay("���ڿ�ʼ�ۺ�����...\n", 50);
	printWithDelay("��һ�������", 30);
	printf("%d", a);
	printWithDelay("������\n", 30);
	if (a == 5)
	{
		printWithDelay("�����������Ǽ�ikun�����������\n",30);
		printWithDelay("������Ҫ��������±���KFC\n", 30);
		system("start https://order.kfc.com.cn/preorder-taro/home?portalSource=BrandWap");
	}
	else
	{
		if (a == 4)
		{
			printWithDelay("�������Ǽ�ikun���治����\n", 30);
			printWithDelay("������Ҫ��������±���KFC\n", 30);
			system("start https://order.kfc.com.cn/preorder-taro/home?portalSource=BrandWap");
		}
		if (a == 3)
		{
			printWithDelay("�������Ǽ�ikun������Ŭ��\n", 30);
			printWithDelay("��Ȼ����Ŭ����Ϊʲô������±���KFC\n", 30);
			system("start https://order.kfc.com.cn/preorder-taro/home?portalSource=BrandWap");
		}
		if (a == 2)
		{
			printWithDelay("���Ƕ��Ǽ�ikun����û��ʵ�������㲻����С���Ӱ�\n", 30);
			printWithDelay("Ϊ��ϴ�����ɣ���Ҫ��±���KFC\n", 30);
			system("start https://order.kfc.com.cn/preorder-taro/home?portalSource=BrandWap");
		}
		if (a == 1)
		{
			printWithDelay("����һ�Ǽ�ikun������̫���ˣ���С��������\n", 30);
			printWithDelay("Ϊ��ϴ�����ɣ���Ҫ��±���KFC\n", 30);
			system("start https://order.kfc.com.cn/preorder-taro/home?portalSource=BrandWap");
		}
		if (a == 0)
		{
			printWithDelay("�㲻��ikun�����С����\n", 30);
			printWithDelay("����ô�ڣ�������±���KFC\n", 30);
			system("start https://order.kfc.com.cn/preorder-taro/home?portalSource=BrandWap");
		}
	}
	printf("��������ɣ�����������˳�...");
	getchar();
	getchar();
	return 0;
}

