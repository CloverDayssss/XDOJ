#include<stdio.h>
#include<string.h>
int main()
{   char a[100];
    int sum=0,b=-1;
    gets(a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>='A'&&a[i]<='F'){sum+=(a[i]-'A'+10);b=1;}
        if(a[i]>='a'&&a[i]<='f'){sum+=(a[i]-'a'+10);b=1;}
        if(a[i]>='0'&&a[i]<='9'){sum+=(a[i]-'0');b=1;}
    }
    if(b==-1){printf("-1 %s",a);}
    else if(b==1){printf("%d",sum);}
}
