#include<stdio.h>
int main(void)
{
	int i;
	int j;

	for (i = 9;i > 0;i--)
	{
		for (j = 0; i > j;j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}