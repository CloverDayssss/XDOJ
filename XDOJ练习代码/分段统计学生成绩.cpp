#include<stdio.h>
int main()
{
    struct Stu
    {
        char name[100];
        int id;
    };
    int n,a=0,b=0,c=0;
    scanf("%d", &n);
    struct Stu sss[n];
    struct Stu temp;
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d",
            sss[i].name,
            &sss[i].id);
    }
    for (int i = 0; i < n; i++)
    {
        if(sss[i].id>=80&&sss[i].id<=100){a++;}
        if(sss[i].id>=60&&sss[i].id<=79){b++;}
        if(sss[i].id>=0&&sss[i].id<=59){c++;}
    }
    printf("%d %d %d",a,b,c);
    return 0;
}
