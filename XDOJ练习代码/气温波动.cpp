#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int qiwen[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &qiwen[i]);
    }

    int max_bodong = 0;
    for (int i = 1; i < n; i++) {
        int diff = abs(qiwen[i] - qiwen[i-1]);
        if (diff > max_bodong) {
            max_bodong = diff;
        }
    }

    printf("%d", max_bodong);
    return 0;
}
