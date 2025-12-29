#include<stdio.h>

int wanshu(int n)
{
	int sum=1;
	for (int c = 2; c <n; c++) {
		if (n % c == 0) {
			sum += c;
		}
	}return (sum == n) ? 1 : 0;
};
int main()
{
	int a, b,i;
	scanf("%d%d", &a, &b);
	for (i = a; i >= a && i <= b; i++)
	{
		if (wanshu(i) == 1&&i!=1) { printf("%d\n", i); }
	}

}
