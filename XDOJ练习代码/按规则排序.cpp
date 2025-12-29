#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int even[100], odd[100];
    int e_len = 0, o_len = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            even[e_len++] = a[i];
        } else {
            odd[o_len++] = a[i];
        }
    }

    for (int i = 0; i < e_len - 1; i++) {
        for (int j = 0; j < e_len - 1 - i; j++) {
            if (even[j] < even[j + 1]) {
                int temp = even[j];
                even[j] = even[j + 1];
                even[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < o_len - 1; i++) {
        for (int j = 0; j < o_len - 1 - i; j++) {
            if (odd[j] < odd[j + 1]) {
                int temp = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = temp;
            }
        }
    }
    int p=0,q=0;
    while(p<e_len)
    {
        printf("%d ",even[p]);p++;
    }
    while(q<o_len)
    {
        printf("%d ",odd[q]);q++;
    }
    return 0;
}
