#include <stdio.h>

int main() {
    char zu[2];
    scanf("%s", zu);

    if (zu[0] >= 'a' && zu[0] <= 'z') {
        printf("%c", zu[0] - 32);
    } else if (zu[0] >= 'A' && zu[0] <= 'Z') {
        printf("%c", zu[0] + 32);
    } else {
        printf("%c", zu[0]);
    }
}
