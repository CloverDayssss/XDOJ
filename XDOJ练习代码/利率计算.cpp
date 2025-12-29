#include<stdio.h>
#include<math.h>
int main()
{
	double r,p,n,a;
    scanf("%lf%lf", &r, &n);
	a = r + 1.00;
	p = pow(a, n);
	printf("%.2f", p);

	return 0;


}
