#include<stdio.h>

int main()
{
	int a, b,z;
	char c;
	scanf("%d%c%d", &a, &c, &b);

	if(c=='+'){z=a+b;};
	if(c=='-'){z=a-b;};
	if(c=='/'){z=a/b;};
	if(c=='*'){z=a*b;};
	if(c=='%'){z=a%b;};

	printf("%d%c%d=%d", a, c, b,z);

	return 0;

}
