#include<stdio.h>
#include<string.h>
int main()
{   char a[50];
    int sum=-1;
    int c = 0;
    gets(a);
    for(int i=0;i<strlen(a);i++)
    {
        if((a[i]>='0'&&a[i]<='9') || (a[i]>='A'&&a[i]<='F') || (a[i]>='a'&&a[i]<='f')){
            if(sum == -1) sum = 0;
            c = 1;
        }
        if(a[i]>='0'&&a[i]<='9'){sum+=(a[i]-'0');}
        if(a[i]>='A'&&a[i]<='F'){sum+=(a[i]-'A'+10);}
        if(a[i]>='a'&&a[i]<='f'){sum+=(a[i]-'a'+10);}
    }
    if(c){printf("%d",sum);}
    else{printf("%d %s",sum,a);}
    return 0;
}
