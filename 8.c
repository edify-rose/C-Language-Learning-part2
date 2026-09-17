//	課題
#include <stdio.h>
short sum = 0;
void subFunc(void)
{
	sum++;
	return;
}

int main(void)
{
	int i;
	int j;

////////////////////////////////
		//	↓↓↓この部分は変更しない
for (i = 5; i < 28; i++)
{

	for (j = 10; j < 35; j++)
	{
		if ((j % 3) == 0)
		{
			//関数呼び出し
			subFunc();
		}
		else
		{
			//関数呼び出し
			subFunc();
			subFunc();
		}
	}

	subFunc();
}
//	↑↑↑この部分は変更しない
	////////////////////////////////


// ここでsubFunc関数の呼び出し総回数画面に表示させるようにする
printf("call count:%d", sum);
return 0;
}
