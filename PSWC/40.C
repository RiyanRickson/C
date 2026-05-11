#include <stdio.h>

int main() {

    int a, b, temp;

    printf("Enter width and height: ");
    scanf("%d %d", &a, &b);

    // Iterative Euclidean Algorithm
    while(b != 0) {

        temp = b;
        b = a % b;
        a = temp;
    }

    // GCD stored in 'a'
    printf("GCD = %d\n", a);

    return 0;
}