#include<stdio.h>
int main()
{
	int a[9];
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("%d", a[0] + a[4] + a[8]);
}
