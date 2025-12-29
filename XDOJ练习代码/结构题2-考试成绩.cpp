#include<stdio.h>
int main()
{
    struct Stu
    {
        char name[100];
        int scr[5];
        int f;
        int sum;
    };
    int n;
    scanf("%d", &n);
    struct Stu sss[n];
    struct Stu temp;
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d %d %d %d",
            sss[i].name,
            &sss[i].scr[0],
            &sss[i].scr[1],
            &sss[i].scr[2],
            &sss[i].scr[3],
            &sss[i].scr[4],
            &sss[i].f);
        sss[i].sum = sss[i].scr[0] + sss[i].scr[1] + sss[i].scr[2] + sss[i].scr[3] + sss[i].scr[4] + sss[i].f;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if ((sss[j].sum < sss[j+1].sum) || (sss[j].sum == sss[j+1].sum && sss[j].f < sss[j+1].f))
            {
                temp = sss[j];
                sss[j] = sss[j+1];
                sss[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s %d %d\n",
            sss[i].name,
            sss[i].sum,
            sss[i].f);
    }
    return 0;
}
