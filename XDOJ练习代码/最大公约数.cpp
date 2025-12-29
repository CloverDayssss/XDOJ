#include<stdio.h>

int c, d;
int gcd(int c, int d)//公约数函数
{
	int a, b;
	a = (c > d) ? d : c;//a取小的那个，b取大的那个
	b = (c < d) ? d : c;
	if (a == 0) { printf("%d", b); }
	if (a != 0) {
		for (int y = a/*y指的是公约数*/; y >=1; y--) {
			if (a % y == 0 && b % y == 0) {
				printf("%d", y); break;
			}
		}
	};
};
	int main()
{
	scanf("%d%d", &c, &d);
	gcd(c, d);
	return 0;
}
