#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int nums[100] = {0};
    int cnt = 0;
    long long tmp = 0;
    int in_num = 0;

    fgets(s, 101, stdin);
    s[strcspn(s, "\n")] = '\0';


    for (int i = 0; s[i]; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            tmp = tmp * 10 + (s[i] - '0');
            in_num = 1;
        }
        else {
            if (in_num) {
                nums[cnt++] = tmp;
                tmp = 0;
                in_num = 0;
            }
        }

    }
    if (in_num) {
        nums[cnt++] = tmp;
    }

    for (int i = 0; i < cnt-1; i++)
        for (int j = 0; j < cnt-1-i; j++)
            if (nums[j] < nums[j+1]) {
                int t = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = t;
            }
    printf("%d", nums[0]);
    for (int i = 1; i < cnt; i++) printf(" %d", nums[i]);

    return 0;
}
