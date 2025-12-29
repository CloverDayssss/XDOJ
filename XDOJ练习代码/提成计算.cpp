#include <stdio.h>

int main() {
    int a, b, d;
    int min, max;
    int result;
    scanf("%d %d", &a, &b);
    scanf("%d", &d);
    max=(a>b)?a:b;
    min=(a<b)?a:b;
    for (int i = max; i >= min; i--) {
        if (i % d == 0) {
            result = i;
            break;
        }
    }
    printf("[%d,%d] %d\n", min, max, result);

    return 0;
}
