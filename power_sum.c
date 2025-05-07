#include <stdio.h>
#include <math.h>

int countWays(int n, int current, int p) {
    int power = pow(current, p);
    
    if (power == n) 
        return 1; 
    if (power > n) 
        return 0; 

    return countWays(n - power, current + 1, p) + countWays(n, current + 1, p);
}

int main() {
    int n, p;
    scanf("%d %d", &n, &p);
    printf("%d", countWays(n, 1, p));
    return 0;
}
