#include <stdio.h>

int main() {
    int n, i, key;
    int low, high, mid;
    int position = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input sorted array
    printf("Enter sorted exam scores:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key
    printf("Enter key value: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    // Binary Search
    while(low <= high) {

        mid = (low + high) / 2;

        if(arr[mid] >= key) {
            position = mid;
            high = mid - 1; // search left part
        }
        else {
            low = mid + 1;
        }
    }

    // Display result
    if(position != -1) {
        printf("First element >= %d is %d at index %d\n",
               key, arr[position], position);
    }
    else {
        printf("No element greater than or equal to %d found\n", key);
    }

    return 0;
}