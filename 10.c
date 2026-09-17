#include<stdio.h>
void printBinary(unsigned char);
int main(void)
{
	unsigned char num = 0x34;
	
	printf("before:");
	
	printBinary(num);

	num |= 0x69;
	printf("after:");
	printBinary(num);


	return 0;
}
void printBinary(unsigned char num)
{
	int i;
	int binary = 0;

	for (i = 7;i >= 0;i--)
	{
		binary = (num >> i) & 1;
		printf("%d", binary);
	}
	return;
}
