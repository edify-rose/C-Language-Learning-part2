#include<stdio.h>
int main(void)
{
	int i;
	int j;

	for (i = 1;i <= 9;i++)
	{
		for (j = 0; j<i;j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}