// Riyan Rickson Castelino
// Pes2ug25am339
// week 10 program 2
#include <stdio.h>
#include<string.h>
struct Patient {
    int id, age, days;
    char name[50], dise[50];
    float cpd;
};

int main() {
    struct Patient p;
    float total, disc = 0, ext = 0, fin;

    printf("Enter patient name: ");
    scanf(" %s", p.name);
    printf("Enter disease name: ");
    getchar();
    gets(p.dise);
    printf("Enter patient ID: ");
    scanf("%d", &p.id);
    printf("Enter age: ");
    scanf("%d", &p.age);
    printf("Enter number of days admitted: ");
    scanf("%d", &p.days);
    printf("Enter treatment charge per day: ");
    scanf("%f", &p.cpd);
    total = p.days * p.cpd;

    if (p.age >= 60)
        disc = total * 0.10;

    if (p.days > 7)
        ext = 2000;

    fin = total - disc + ext;

    printf("\n--- Patient Details ---\n");
    printf("Patient ID : %d\n", p.id);
    printf("Patient Name : %s\n", p.name);
    printf("Age : %d\n", p.age);
    printf("Disease Name : %s\n", p.dise);
    printf("Days Admitted : %d\n", p.days);
    printf("Treatment Charge/Day : %.2f\n", p.cpd);

    printf("\n--- Bill Details ---\n");
    printf("Total Treatment Cost : %.2f\n", total);
    printf("Discount Amount : %.2f\n", disc);
    printf("Extra Medical Charge : %.2f\n", ext);
    printf("Final Hospital Bill : %.2f\n", fin);

    return 0;
}