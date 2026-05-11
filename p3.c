// Riyan Rickson Castelino
// pes2ug25am339
// week 8 program 3
#include <stdio.h>

int main() {
    char stored[] = "PES123",input[50];
    int flag = 1;

    printf("Enter password: ");
    scanf("%s", input);

    char *p1 = stored;
    char *p2 = input;

    while(*p1 != '\0' || *p2 != '\0') {
        if(*p1 != *p2) {
            flag = 0;
            break;
        }
        p1++;
        p2++;
    }

    if(flag)
        printf("Password matched. Access granted.\n");
    else
        printf("Password did not match. Access denied.\n");

    return 0;
}