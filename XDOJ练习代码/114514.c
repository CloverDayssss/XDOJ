#include <stdio.h>
#include <math.h>

int main()
{
    int a,b=1,c=0,d=10,h=1,y;
    scanf("%d",&a);
    while((a/int(pow(10,b)))!=0)
    {
        b++;
    }
    if(a<10)
    {
        c=a;
        d=a;
    }
    while(a>10)
    {
        y=a%10;
        if(y<d)
        {
            d=y;
        }
        if(y>c)
        {
            c=y;
        }
        a=a/10;
    }
    printf("%d %d %d",b,c,d);
    return 0;
}
