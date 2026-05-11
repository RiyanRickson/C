// Riyan Rickson Castelino
// pes2ug25am339
// week 8 program 4
#include <stdio.h>

int main() {
    char fname[50], lname[50], fullname[100],*p;

    printf("Enter first name: ");
    scanf("%s", fname);

    printf("Enter last name: ");
    scanf("%s", lname);

    int i = 0;
    for(i = 0; fname[i] != '\0'; i++) {
        fullname[i] = fname[i];
    }

    fullname[i++] = ' ';

    for(int j = 0; lname[j] != '\0'; j++) {
        fullname[i++] = lname[j];
    }

    fullname[i] = '\0';

    printf("Full name: %s\n", fullname);

    int count = 0;
    p = fullname;
    while(*p != '\0') {
        count++;
        p++;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}