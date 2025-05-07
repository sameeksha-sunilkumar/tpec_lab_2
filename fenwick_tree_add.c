#include<stdio.h>
#include<math.h>

void display(int arr[], int n) { 
    int i;
    for ( i = 1; i <= n; i++) { 
        printf("\t %d ", arr[i]);
    } 
    printf("\n");
}

void add(int T[], int n, int k, int x) { 
    while (k <= n) { 
        T[k] += x;  
        k += k & -k; 
    }

    display(T, n); 
}

int main() { 
    int n = 8, k, x;
    int T[100] = {0, 1, 4, 4, 16, 6, 7, 4, 29}; 
    
    printf("\nFenwick Tree before update: ");
    display(T, n); 

    printf("\nEnter the position and value to be increased: ");
    scanf("%d%d", &k, &x); 

    add(T, n, k, x); 

    return 0; 
}
