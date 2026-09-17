#include<stdio.h>

long getSummation(long start, long end);
int main(void)
{
	long mainStart = 0;
	long mainEnd = 10;
	long mainTotal = 0;

	mainTotal = getSummation(mainStart, mainEnd);
	printf("start:%d end:%d total:%d", mainStart, mainEnd, mainTotal);
	return 0;
	
}
long getSummation(long start, long end)
{
	int i;
	long total = 0;
	for (i = start;i <= end;i++)
	{
		total+=i;
	}
	//totalを返すからreturn total;
	return total;
}
