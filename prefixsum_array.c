//study sum and create_prefix function

#include <stdio.h>

void display(int arr[], int n) {
	int i;
    for ( i = 0; i < n; i++) {
        printf("\t%d", arr[i]);
    }
    printf("\n");
}

void create_prefix_sum_array(int arr[], int n) {
	int i;
    for ( i = 1; i < n; i++) {
        arr[i] = arr[i] + arr[i - 1];
    }
}

void sum(int arr[], int n, int a, int b) {
    int result;
    if (a == 0)
        result = arr[b];
    else
        result = arr[b] - arr[a - 1];
    printf("The sum is %d\n", result);
}

int main() {
    int n, i, arr[10], a, b;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    display(arr, n);

    create_prefix_sum_array(arr, n);

    printf("\nPrefix sum array: ");
    display(arr, n);

    printf("\nEnter the range (a and b) to find the sum: ");
    scanf("%d%d", &a, &b);

    sum(arr, n, a, b);

    return 0;
}
