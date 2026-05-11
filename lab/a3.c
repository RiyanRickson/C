// Riyan Rickson Castelino
// Pes2ug25am339
// week 10 program 3
#include <stdio.h>
#include<string.h>
struct Player {
    char name[50];
    int match, run, no;
    float avg;
};

int main() {
    int n, i, max = 0;
    struct Player p[50];

    printf("Enter number of players: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of player %d\n", i + 1);

        printf("Name: ");
        getchar();
        gets(p[i].name);

        printf("Matches: ");
        scanf("%d", &p[i].match);

        printf("Runs: ");
        scanf("%d", &p[i].run);

        printf("Not Out: ");
        scanf("%d", &p[i].no);

        if (p[i].match - p[i].no == 0)
            p[i].avg = 0;
        else
            p[i].avg = (float)p[i].run / (p[i].match- p[i].no);
    }

    for (i = 1; i < n; i++) {
        if (p[i].avg > p[max].avg)
            max = i;
    }

    printf("\n--- Player with Highest Batting Average ---\n");
    printf("Name : %s\n", p[max].name);
    printf("Matches : %d\n", p[max].match);
    printf("Runs : %d\n", p[max].run);
    printf("Not Out : %d\n", p[max].no);
    printf("Average : %.2f\n", p[max].avg);

    return 0;
}