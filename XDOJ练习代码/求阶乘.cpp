#include<stdio.h>
unsigned long long int jiecheng(int n)
{   long long int sum=1;
    for(int i=1;i<=n;i++)
    {
        sum*=i;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%lld ",jiecheng(i));
    }
}
