#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    int f=0,b=0,c=0;
    for(int i=0;i<strlen(a);i++)
    {
        char d=a[i];
        if((d>='A'&&d<='Z')||(d>='a'&&d<='z')){f++;}
        else if(d>='0'&&d<='9'){b++;}
        else{c++;}
    }
    printf("%d %d %d",f,b,c);
}
