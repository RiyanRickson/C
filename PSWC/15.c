#include <stdio.h>

// Recursive Linear Search Function
int recursiveLinearSearch(int arr[], int n, int key, int index) {

    // Base case: element not found
    if(index >= n) {
        return -1;
    }

    // Element found
    if(arr[index] == key) {
        return index;
    }

    // Recursive call
    return recursiveLinearSearch(arr, n, key, index + 1);
}

int main() {
    int n, i, key, result;

    printf("Enter number of employee IDs: ");
    scanf("%d", &n);

    int arr[n];

    // Input employee IDs
    printf("Enter employee IDs:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key to search
    printf("Enter employee ID to search: ");
    scanf("%d", &key);

    // Function call
    result = recursiveLinearSearch(arr, n, key, 0);

    // Display result
    if(result != -1) {
        printf("Employee ID found at index %d\n", result);
    } else {
        printf("Employee ID not found\n");
    }

    return 0;
}