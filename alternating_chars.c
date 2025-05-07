//study while loop only

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int t;
    unsigned int count = 0;
    char *c;

    scanf("%d", &t);

    c = (char *)malloc(sizeof(char) * 100002);
    if (c == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    while (t--) {
        scanf("%s", c);

        count = 0;

        for (int i = 0; c[i] != '\0'; i++) {
            if (c[i] == c[i + 1]) {
                count++;  
            }
        }

        printf("%u\n", count);
    }
    free(c);

    return 0;
}
