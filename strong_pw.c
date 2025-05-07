#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int minimumNumber(int n, char* password) {
    int lower = 0, upper = 0, digit = 0, special = 0;

    for (int i = 0; i < n; i++) {
        if (password[i] >= 'a' && password[i] <= 'z')
            lower++;
        else if (password[i] >= 'A' && password[i] <= 'Z')
            upper++;
        else if (password[i] >= '0' && password[i] <= '9')
            digit++;
        else
            special++;
    }

    int add = 0;
    if (lower == 0) add++;
    if (upper == 0) add++;
    if (digit == 0) add++;
    if (special == 0) add++;

    int totalLength = n + add;
    if (totalLength < 6)
        add += 6 - totalLength;

    return add;
}

int main() {
    int n;
    scanf("%d", &n);

    char password[100]; 
    scanf("%s", password);

    int answer = minimumNumber(n, password);
    printf("%d\n", answer);

    return 0;
}
