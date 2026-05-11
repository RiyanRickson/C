#include <stdio.h>

// Function to copy string
void copyString(char source[], char destination[]) {
    int i = 0;

    while(source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}

// Function to find length of string
int stringLength(char str[]) {
    int count = 0;

    while(str[count] != '\0') {
        count++;
    }

    return count;
}

// Function to compare strings
int compareString(char str1[], char str2[]) {
    int i = 0;

    while(str1[i] != '\0' && str2[i] != '\0') {

        if(str1[i] != str2[i]) {
            return 0; // Not equal
        }

        i++;
    }

    if(str1[i] == '\0' && str2[i] == '\0') {
        return 1; // Equal
    }

    return 0;
}

int main() {

    char str1[100], str2[100], copied[100];

    // Input strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    int i = 0;

    while(str1[i] != '\0') {
        if(str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;

    while(str2[i] != '\0') {
        if(str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
        i++;
    }

    // Copy string
    copyString(str1, copied);

    // Display copied string
    printf("\nCopied String: %s\n", copied);

    // Display lengths
    printf("Length of first string = %d\n", stringLength(str1));
    printf("Length of second string = %d\n", stringLength(str2));

    // Compare strings
    if(compareString(str1, str2)) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}