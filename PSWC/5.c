#include <stdio.h>

int main() {
    int n, i, j, minIndex, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection sort only even elements
    for(i = 0; i < n - 1; i++) {

        // Process only if current element is even
        if(arr[i] % 2 == 0) {

            minIndex = i;

            // Find smallest even element
            for(j = i + 1; j < n; j++) {
                if(arr[j] % 2 == 0 && arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }

            // Swap even elements
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    // Display result
    printf("Array after sorting even elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}