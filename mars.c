//study only for loop

#include <stdio.h>
#include <stdlib.h>

int main() {
    char* S = (char *)malloc(10240 * sizeof(char));  
    scanf("%s", S);  
    int count = 0, i;
    for(i = 0; S[i] != '\0'; i += 3) {  
        if(S[i] != 'S') {
            count++;
        }
        if(S[i + 1] != 'O') {
            count++;
        }
        if(S[i + 2] != 'S') {
            count++;
        }
    }

    printf("%d", count);  
    free(S);  
    return 0;
}
