#include <stdio.h>
#include <string.h>

int main() {
    char a[50];
    gets(a);
    a[strcspn(a, "\n")] = '\0';
    int len = strlen(a);
    int base = 0;
    int add1 = 0;
    int add2 = 0;
    int has_upper = 0, has_lower = 0, has_digit = 0, has_special = 0;
    if (len == 0) {
        printf("0");
        return 0;
    }
    base = 1;

    if (len > 8) {
        add1 = 1;
    }
    for (int i = 0; i < len; i++) {
        char z = a[i];
        if (z >= 'A' && z <= 'Z') {
            has_upper = 1;
        } else if (z >= 'a' && z <= 'z') {
            has_lower = 1;
        } else if (z >= '0' && z <= '9') {
            has_digit = 1;
        } else {
            has_special = 1;
        }
    }

    int categories = has_upper + has_lower + has_digit + has_special;
    switch (categories) {
        case 2: add2 = 1; break;
        case 3: add2 = 2; break;
        case 4: add2 = 3; break;
        default: add2 = 0;
    }

    int strength = base + add1 + add2;
    printf("%d", strength);

    return 0;
}
