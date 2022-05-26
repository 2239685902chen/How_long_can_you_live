#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0;
	int w = 0;
	scanf("%d", &q);
	w = q * 3156;
	printf("%d0000\n", w);//在得数后补四个零就不容易溢出
	return 0;
}