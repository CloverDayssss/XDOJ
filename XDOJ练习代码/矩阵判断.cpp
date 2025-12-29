#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int is_up = 1;
    int is_down = 1;
    int is_pd = 1;
    int up_sum = 0;
    int down_sum = 0;
    int pd_sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                pd_sum += a[i][j];
            } else if (j > i) {
                up_sum += a[i][j];
                if (a[i][j] != 0) {
                    is_down = 0;
                    is_pd = 0;
                }
            } else {
                down_sum += a[i][j];
                if (a[i][j] != 0) {
                    is_up = 0;
                    is_pd = 0;
                }
            }
        }
    }
    printf("\n");
    if (is_pd) {
        printf("PD %d\n", pd_sum);
    } else if (is_up) {
        printf("UP %d\n", up_sum);
    } else if (is_down) {
        printf("DOWN %d\n", down_sum);
    } else {
        printf("NO\n");
    }

    return 0;
}
