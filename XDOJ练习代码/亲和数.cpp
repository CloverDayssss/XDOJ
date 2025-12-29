#include<stdio.h>

void zhenyueshu(int n, int* geshu, int* sum) {
    *sum = 0;
    *geshu = 0; 
        for (int a = 1; a <= n / 2; a++) {
            if (n % a == 0) {
                *sum += a;
                (*geshu)++;
            }
        };
}
int main() 
{
	int n,sn,yuehe_n,m,sm,yuehe_m;
	scanf("%d%d", &n, &m);
    zhenyueshu(n, &sn, &yuehe_n);
    zhenyueshu(m, &sm, &yuehe_m);
    if (yuehe_n == m && yuehe_m == n) { printf("yes"); } else { printf("no"); }
    printf(" %d %d", sn, sm);

}