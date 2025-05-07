//study from funny=1

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int T;
    char S[10001];

    scanf("%d", &T);  
    while (T--) {
        scanf("%s", S);  
        int N = strlen(S);
        int funny = 1;

        for (int i = 1, r = N - 2; i < N; i++, r--) {
            if (fabs(S[i] - S[i - 1]) != fabs(S[r] - S[r + 1])) {
                funny = 0;
                break;
            }
        }

        if (funny)
            printf("Funny\n");
        else
            printf("Not Funny\n");
    }

    return 0;
}
