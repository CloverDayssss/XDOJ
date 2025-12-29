#include<stdio.h>
int main()
{
    long int n;
    int m=0,j=0;
    scanf("%ld",&n);
    int a[10];
    for(int i=n;i>0;i/=10)
    {
        a[m++]=i%10;j++;
    }
    for(int p=0;p<j;p++)
    {
        for(int q=0;q<j-1-p;q++)
        {
            if(a[q]<a[q+1]){int r=a[q];a[q]=a[q+1];a[q+1]=r;}
        }
    }
    for(int i=0;i<j;i++)
    {
        printf("%d ",a[i]);
    }
}
