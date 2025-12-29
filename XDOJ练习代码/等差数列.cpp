#include<stdio.h>

int main()
{
    int n,max=-10000,min=10000;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){scanf("%d",&a[i]);}
    for(int i = 0; i < n; i++){
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }
    int gongcha = (max - min) / (n-1);
    if((max - min) % (n-1)==0){printf("%d",gongcha);}
    else{printf("no");}
}
