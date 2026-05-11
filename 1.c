// Riyan Rickson Castelino
// Pes2ug25am339
// week 9 program 2
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, new_n, i;
    float *expenses, total = 0, new_total = 0;

    printf("Enter the number of months: ");
    scanf("%d", &n);

    expenses = (float *)malloc(n * sizeof(float));

    if (expenses == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the expenses for %d months:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &expenses[i]);
        total += expenses[i];
    }

    printf("Expenses entered are:\n");
    for (i = 0; i < n; i++) {
        printf("Month %d: %.2f\n", i + 1, expenses[i]);
    }

    printf("Total expense for %d months = %.2f\n", n, total);

    printf("Enter the new total number of months: ");
    scanf("%d", &new_n);

    expenses = (float *)realloc(expenses, new_n * sizeof(float));

    if (expenses == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("Enter the expenses for the additional %d months:\n", new_n - n);
    for (i = n; i < new_n; i++) {
        scanf("%f", &expenses[i]);
    }

    for (i = 0; i < new_n; i++) {
        new_total += expenses[i];
    }

    printf("Updated list of expenses:\n");
    for (i = 0; i < new_n; i++) {
        printf("Month %d: %.2f\n", i + 1, expenses[i]);
    }

    printf("New total expense for %d months = %.2f\n", new_n, new_total);
    free(expenses);
    printf("Memory deallocated successfully.\n");

    return 0;
}