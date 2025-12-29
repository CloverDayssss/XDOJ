#include<stdio.h>
int main()
{
    int prime[100]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,78,79,83,89,91};
    int n,b[100],a=0;
    scanf("%d",&n);
    for(int i=0;i<25;i++)
    {
        if(n%prime[i]==0){b[a++]=prime[i];n=n/prime[i];i--;}
        if(n%prime[i]!=0){continue;}
        if(n==1){break;}
    }
    for(int i=0;i<a-1;i++)
    {
        printf("%d*",b[i]);
    }
    printf("%d",b[a-1]);
}
