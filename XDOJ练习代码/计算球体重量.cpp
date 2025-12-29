#include<stdio.h>
#define PI 3.1415926

double zhiliangjisuan(double zhijing, double midu)
{
    double tiji = (4.0 / 3.0) * PI * (zhijing / 2) * (zhijing / 2) * (zhijing / 2);
    return midu * tiji;
}

int main()
{
    int a, b;
    double e = 0.00786, f = 0.0193;
    scanf("%d%d", &a, &b);
    double c = zhiliangjisuan(a, e);
    double d = zhiliangjisuan(b, f);
    printf("%.3f %.3f\n", c, d);

    return 0;
}
