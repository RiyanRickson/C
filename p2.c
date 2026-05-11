// Riyan Rickson Castelino
// pes2ug25am339
// week 8 program 2
#include <stdio.h>
#include <string.h>

int main() {
    char fname[50], lname[50], fullname[100], copy[100], compare[100];

    printf("Enter first name: ");
    scanf("%s", fname);

    printf("Enter last name: ");
    scanf("%s", lname);

    strcpy(fullname, fname);
    strcat(fullname, " ");
    strcat(fullname, lname);

    printf("Full name: %s\n", fullname);
    printf("Length: %lu\n", strlen(fullname));

    strcpy(copy, fullname);
    printf("Copied name: %s\n", copy);

    printf("Enter another name: ");
    scanf("%s", compare);

    

    if(strcmp(copy, compare) == 0)
        printf("Both names are same.\n");
    else
        printf("Both names are different.\n");

    return 0;
}