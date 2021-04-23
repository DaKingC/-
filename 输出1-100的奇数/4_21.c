
#include<stdio.h>

int main()
{
	int i = 1;

	printf("Êä³ö1-100µÄÆæÊı:\n");
	while (i <= 100)
	{
		if (i % 2 == 1) {
             printf("%d ", i);
		}
		i++;
	}

	return 0;
}