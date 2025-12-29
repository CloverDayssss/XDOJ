#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int c = (a < b) ? a : b;
	int d = (a > b) ? a : b;
	if(c==0){printf("%d", d);}
	for (c; c >= 1; c--) {
		if (a%c == 0 && b%c == 0) { printf("%d", c); break; }
	}
	return 0;

}
