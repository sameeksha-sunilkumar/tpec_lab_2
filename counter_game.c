#include <stdio.h>

int isPowerOf2(unsigned long n) {
    return (n & (n - 1)) == 0;
}

unsigned long largestPowerOf2(unsigned long n) {
    unsigned long m = 1;
    while (m << 1 <= n) {
        m <<= 1;
    }
    return m;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        unsigned long n;
        int win = 0;
        scanf("%lu", &n);

        while (n != 1) {
            if (isPowerOf2(n))
                n >>= 1; // divide by 2
            else
                n -= largestPowerOf2(n);
            win++;
        }

        if (win % 2 == 0)
            printf("Richard\n");
        else
            printf("Louise\n");
    }

    return 0;
}
