#include <stdio.h>

int camelCaseWords(char *s) {
    int count = 1;
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            count++;
        }
    }
    return count;
}

int main() {
    char s[100];
    scanf("%s", s);
    printf("%d\n", camelCaseWords(s));
    return 0;
}
