#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int odd = 0;
	int i = 0;

	printf("������һ�����ж��Ƿ�Ϊ����\n");
	scanf("%d", &i);
	if (i % 2 == 1)
		printf("������\n");
	else
		printf("��������\n");

	return 0;
}