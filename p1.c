// Riyan Rickson Castelino
// pes2ug25am339
// week 8 program 1
#include <stdio.h>

int main() {
    char str[100],maxch;
    int freq[256] = {0}, i, max = 0;

    printf("Enter string: ");
    scanf("%s", str);

    // Count characters
    for(i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    // Find max occurring character
    for(i = 0; str[i] != '\0'; i++) {
        if(freq[str[i]] > max) {
            max = freq[str[i]];
            maxch = str[i];
        }
    }

    printf("The string is: %s\n", str);
    printf("Number of characters: %d\n", i);
    printf("Most frequent character: %c\n", maxch);
    printf("It appears %d times\n", max);

    return 0;
}