#include <stdio.h>

int main() {
    int n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pointer declarations
    int *start = arr;
    int *end = arr + n - 1;

    // Reverse array using pointer arithmetic
    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    // Display reversed array
    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}