#include <stdio.h>
#include <string.h>

struct EmergencyCall {
    char name[50];
    int age;
    float distanceKm;
    int urgencyScore;
    float priority;
};

int main() {
    int n, i, j;
    struct EmergencyCall temp;

    printf("Enter number of emergency calls: ");
    scanf("%d", &n);

    struct EmergencyCall e[n];

    // Input details
    for(i = 0; i < n; i++) {

        printf("\nEnter details for call %d\n", i + 1);

        getchar();

        printf("Name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);

        e[i].name[strcspn(e[i].name, "\n")] = '\0';

        printf("Age: ");
        scanf("%d", &e[i].age);

        printf("Distance (km): ");
        scanf("%f", &e[i].distanceKm);

        printf("Urgency Score: ");
        scanf("%d", &e[i].urgencyScore);

        // Calculate priority
        e[i].priority = e[i].urgencyScore + (50 - e[i].distanceKm);

        if(e[i].age > 65) {
            e[i].priority += 10;
        }
    }

    // Sort in decreasing order of priority
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {

            if(e[j].priority < e[j + 1].priority) {

                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }

    // Display sorted calls
    printf("\nEmergency Calls Sorted by Priority:\n");

    for(i = 0; i < n; i++) {

        printf("\nName: %s\n", e[i].name);
        printf("Age: %d\n", e[i].age);
        printf("Distance: %.2f km\n", e[i].distanceKm);
        printf("Urgency Score: %d\n", e[i].urgencyScore);
        printf("Priority: %.2f\n", e[i].priority);
    }

    return 0;
}