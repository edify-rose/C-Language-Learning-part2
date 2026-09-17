#include<stdio.h>

long getTriangleArea(unsigned short base, unsigned short height);
int main(void)
{
	unsigned short mainBase = 10;
	unsigned short mainHeight =20;
	long mainArea = 0;

	mainArea=getTriangleArea(mainBase, mainHeight);
	
	printf("base:%d height:%d area:%d", mainBase, mainHeight, mainArea);
	return 0;
}
long getTriangleArea(unsigned short base, unsigned short height)
{
	return (base * height / 2);
}