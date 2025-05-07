#include <stdio.h>
#include <string.h>

int camelcase(char* s) {
    int count = 1;  

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {  
            count++;
        }
    }
    return count;
}

int main() {
    char s[100000];  

    scanf("%s", s);

    printf("%d\n", camelcase(s));

    return 0;
}
