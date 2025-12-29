#include<stdio.h>
int tonggoushu(int n)
{
    int a[10],b[10],m=n*n,c=0,d=0;
    for(int i=n;i>0;i/=10)
    {
        a[c++]=i%10;
    }
    for(int i=m;i>0;i/=10)
    {
        b[d++]=i%10;
    }
    int is_valid = 1;
    for (int i = 0; i < c; i++) {
        if (i >= d || a[i] != b[i]) {
            is_valid = 0;
            break;
        }
    }

    if (is_valid) {
        return n;
    } else {
        return -1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {   int q=tonggoushu(a[i]);
        if(q==-1)
        {
            printf("No\n");
        }
        else
        {printf("%d\n",q);}
    }

}
