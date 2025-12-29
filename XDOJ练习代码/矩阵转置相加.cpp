#include<stdio.h>
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }
    int b[3][3];
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++){b[j][i]=a[i][j];}
    }
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        c[0][i]=b[0][i]+a[0][i];c[1][i]=b[1][i]+a[1][i];c[2][i]=b[2][i]+a[2][i];
    }
    for (int i = 0; i < 3; i++) {
        printf("%d %d %d\n", c[i][0], c[i][1],c[i][2]);
    }
}
