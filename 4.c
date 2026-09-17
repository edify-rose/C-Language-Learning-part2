#include<stdio.h>
int main(void)
{
	int num = 1500;
	int a=0;

	while (a * a < num)
	{
		a++;
	}
	printf("Target value:%d Squared value:%d Value after squaring:%d", num, a, a * a);
	return 0;
}
