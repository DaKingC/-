#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int odd = 0;
	int i = 0;

	printf("请输入一个数判断是否为奇数\n");
	scanf("%d", &i);
	if (i % 2 == 1)
		printf("是奇数\n");
	else
		printf("不是奇数\n");

	return 0;
}