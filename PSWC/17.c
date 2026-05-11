#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    int bins[rows][3];

    // Input bin numbers
    printf("Enter bin numbers:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &bins[i][j]);
        }
    }

    // Pointer to array
    int (*ptr)[3] = bins;

    // Display bin numbers using pointer
    printf("\nWarehouse Bin Numbers:\n");

    for(i = 0; i < rows; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}