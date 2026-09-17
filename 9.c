#include<stdio.h>

void printBinary(unsigned char);
int main(void)
{
	unsigned char num = 0xD2;

	printBinary(num);
	return 0;

}
void printBinary(unsigned char num)
{
	int i;
	int binary = 0;

	for (i = 0;i <=7;i++)
	{
		binary = (num >> i) & 1;
		printf("%d", binary);
	}
	return  ;
	
}