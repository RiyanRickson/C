#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i, sum = 0;
    float average;

    // Allocate memory for 3 integers
    arr = (int *)malloc(3 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read first 3 readings
    printf("Enter 3 sensor readings:\n");
    for(i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    // Expand memory for 5 integers
    arr = (int *)realloc(arr, 5 * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // Read 2 additional readings
    printf("Enter 2 more sensor readings:\n");
    for(i = 3; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Display all readings
    printf("\nAll Sensor Readings:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    // Calculate average
    average = sum / 5.0;

    printf("\nAverage = %.2f\n", average);

    // Free memory
    free(arr);

    return 0;
}