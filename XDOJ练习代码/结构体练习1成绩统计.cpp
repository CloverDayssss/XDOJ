#include<stdio.h>
int main()
{
    struct Stu
    {
        int id;
        char name[100];
        int scr[4];
        double avg;
    };
    int n;
    scanf("%d",&n);
    struct Stu sss[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %d %d %d",
              &sss[i].id,
              sss[i].name,
              &sss[i].scr[0],
              &sss[i].scr[1],
              &sss[i].scr[2]);
        sss[i].avg=(double)(sss[i].scr[1]+sss[i].scr[2]+sss[i].scr[0])/3.0;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
    {
        if(sss[j].avg<sss[j+1].avg){struct Stu temp1=sss[j];sss[j]=sss[j+1];sss[j+1]=temp1;}
        if(sss[j].avg==sss[j+1].avg&&sss[j].id>sss[j+1].id){struct Stu temp2=sss[j];sss[j]=sss[j+1];sss[j+1]=temp2;}
    }
    }

    for(int i=0;i<n;i++){
    printf("%d %s %.1lf\n",
           sss[i].id,
           sss[i].name,
           sss[i].avg);
    }
}
