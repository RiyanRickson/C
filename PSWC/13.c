#include <stdio.h>

int main() {
    int n, i, j, minIndex, temp;
    int swapCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort with swap counting
    for(i = 0; i < n - 1; i++) {

        minIndex = i;

        // Find minimum element
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap only if needed
        if(minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;

            swapCount++;
        }
    }

    // Display sorted array
    printf("\nSorted Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Display swap count
    printf("\nNumber of swaps = %d\n", swapCount);

    return 0;
}