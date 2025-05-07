#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[10000];
    int f[26] = {0}, ans = 0;

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i]; i++) {
        if (isalpha(s[i])) {
            char ch = toupper(s[i]);
            if (!f[ch - 'A']++) 
                ans++;
        }
    }

    if (ans == 26)
        printf("pangram\n");
    else
        printf("not pangram\n");

    return 0;
}
