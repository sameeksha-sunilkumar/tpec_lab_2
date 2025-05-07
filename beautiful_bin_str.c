#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;  
    scanf("%d", &n);
    
    char* B = (char *)malloc((n + 1) * sizeof(char)); 
    scanf("%s", B);  

    int count = 0;

    for (int i = 0; i < n - 2; i++) {
        if (B[i] == '0' && B[i+1] == '1' && B[i+2] == '0') {
            B[i+2] = '1';  
            count++;  
            i += 2; 
        }
    }

    printf("%d\n", count);

    free(B);

    return 0;
}
