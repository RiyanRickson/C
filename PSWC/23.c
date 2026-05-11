#include <stdio.h>

int main() {
    int scores[4], i;

    // Pointer to array
    int *ptr = scores;

    // Input scores
    printf("Enter scores of 4 track events:\n");
    for(i = 0; i < 4; i++) {
        scanf("%d", (ptr + i));
    }

    // Assume first score is highest
    int highest = *ptr;

    // Find highest score
    for(i = 1; i < 4; i++) {
        if(*(ptr + i) > highest) {
            highest = *(ptr + i);
        }
    }

    // Display highest score
    printf("Highest score = %d\n", highest);

    return 0;
}