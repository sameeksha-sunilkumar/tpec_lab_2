#include <stdio.h>
#include <string.h>

int main() {
    int n, k;
    char ar[101];

    scanf("%d", &n);
    scanf("%s", ar);
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        char x = ar[i];

        if (x >= 'a' && x <= 'z') {
            x = ((x - 'a' + k) % 26) + 'a';
            ar[i] = x;
        }
        else if (x >= 'A' && x <= 'Z') {
            x = ((x - 'A' + k) % 26) + 'A';
            ar[i] = x;
        }
    }

    printf("%s", ar);
    return 0;
}
