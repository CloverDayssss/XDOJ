#include<stdio.h>

int zhishupanduan(int n)//判断接收的n是否为质数，如果是则返回1，不是则返回0
{
	int sum=0;
	for (int a = 1; a <= n; a++)
	{
		if (n % a == 0) { sum += a; }
	}
	return (sum == 1+n ? 1 : 0);
}
int zhishu(int n)//接受一个数字n，输出第n个质数
{   int a = 1;
	while (n != 0)
	{
		a++; if (zhishupanduan(a) == 1) { n--; };
	}return a;
}
int main()
{
	int a,b,sum=0;
	scanf("%d%d", &a,&b);
	int c = (a > b) ? a : b;
	int d = (a < b) ? a : b;
	for (int e = d; e <= c; e++) { sum += zhishu(e); }//将第p到第p+10个质数相加得到sum
	printf("%d", sum);
	return 0;
}
