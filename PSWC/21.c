#include <stdio.h>

int main() {
    int L, R, i;
    int digit, sum, temp;

    printf("Enter range (L and R): ");
    scanf("%d %d", &L, &R);

    printf("3-digit Armstrong numbers in the range are:\n");

    // Loop through the range
    for(i = L; i <= R; i++) {

        // Check only 3-digit numbers
        if(i >= 100 && i <= 999) {

            temp = i;
            sum = 0;

            // Find sum of cubes of digits
            while(temp > 0) {
                digit = temp % 10;
                sum += digit * digit * digit;
                temp = temp / 10;
            }

            // Check Armstrong condition
            if(sum == i) {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
