#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char words[100][100];
    int word_cnt = 0;
    int idx = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            if (idx > 0) {
                words[word_cnt][idx] = '\0';
                word_cnt++;
                idx = 0;
            }
        } else {
            words[word_cnt][idx++] = s[i];
        }
    }

    if (idx > 0) {
        words[word_cnt][idx] = '\0';
        word_cnt++;
    }


    printf("%s", words[word_cnt-1]);
    for (int i = word_cnt-2; i >= 0; i--) {
        printf(" %s", words[i]);
    }

    return 0;
}
