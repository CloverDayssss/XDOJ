#include <stdio.h>
#include <string.h>
int main()
{   int c,sum=0;
    char b;
    char a[100];
    scanf("%c",&b);
    scanf("%d\n",&c);
    gets(a);
    if(c==0){
    for(int i=0;i<strlen(a);i++)
    {
        if(b==a[i]||b==(a[i]+32)||b==(a[i]-32)){sum++;}
    }}
    if(c==1){
    for(int i=0;i<strlen(a);i++)
    {
        if(b==a[i]){sum++;}
    }}
    printf("%d",sum);

}
