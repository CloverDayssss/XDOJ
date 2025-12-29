#include<stdio.h>
int main()
{
    int a[6],b[6];
    for(int i=0;i<6;i++){scanf("%d",&a[i]);}
    for(int i=0;i<6;i++){scanf("%d",&b[i]);}
    printf("%d %d\n%d %d",a[0]*b[0]+a[1]*b[2]+a[2]*b[4],a[0]*b[1]+a[1]*b[3]+a[2]*b[5],a[3]*b[0]+a[4]*b[2]+a[5]*b[4],a[3]*b[1]+a[4]*b[3]+a[5]*b[5]);
}
