// Riyan Rickson Castelino
// pes2ug25am339
// week 8 program 5
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i,newSize;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));

    printf("Enter elements for malloc:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements using malloc:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int *arr2 = (int*) calloc(n, sizeof(int));

    printf("\nElements using calloc:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    
    printf("\nEnter new size for realloc: ");
    scanf("%d", &newSize);

    arr = (int*) realloc(arr, newSize * sizeof(int));

    printf("Enter new elements:\n");
    for(i = 0; i < newSize; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements after realloc:\n");
    for(i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    free(arr2);

    printf("\nMemory deallocated successfully.\n");

    return 0;
}