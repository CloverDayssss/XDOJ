#include<stdio.h>

int main()
{   int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){scanf("%d",&a[i]);}
    for(int z=0;z<n;z++)
    {
        for(int i=0;i<n-1-z;i++)
            {if(a[i]<a[i+1]){int temp=a[i];a[i]=a[i+1];a[i+1]=temp;}}
    }
    if(n%2!=0){printf("%d",a[(n-1)/2]);}
    else {printf("%d",(a[n/2]+a[(n/2)-1])/2);}
}
