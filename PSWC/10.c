#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr1, *arr2;
    int i, product = 1;

    // Allocate memory using malloc()
    arr1 = (int *)malloc(5 * sizeof(int));

    // Allocate memory using calloc()
    arr2 = (int *)calloc(5, sizeof(int));

    // Check memory allocation
    if (arr1 == NULL || arr2 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Print malloc array elements
    printf("Elements of malloc array:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }

    // Print calloc array elements
    printf("\n\nElements of calloc array:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    // Assign values to calloc array
    printf("\n\nEnter 5 values for calloc array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    // Calculate product
    for(i = 0; i < 5; i++) {
        product *= arr2[i];
    }

    // Display product
    printf("Product of elements = %d\n", product);

    // Free memory
    free(arr1);
    free(arr2);

    return 0;
}