#include <stdio.h>
#include <string.h>

struct CityTemperature {
    char cityName[50];
    float temperature[7];
    float total;
    float average;
};

int main() {

    int n, i, j, maxIndex = 0;

    printf("Enter number of cities: ");
    scanf("%d", &n);

    struct CityTemperature city[n];

    // Input details
    for(i = 0; i < n; i++) {

        getchar();

        printf("\nEnter city name: ");
        fgets(city[i].cityName, sizeof(city[i].cityName), stdin);

        city[i].cityName[strcspn(city[i].cityName, "\n")] = '\0';

        city[i].total = 0;

        printf("Enter temperatures for 7 days:\n");

        for(j = 0; j < 7; j++) {
            scanf("%f", &city[i].temperature[j]);

            city[i].total += city[i].temperature[j];
        }

        // Calculate average
        city[i].average = city[i].total / 7;

        // Find city with maximum total temperature
        if(city[i].total > city[maxIndex].total) {
            maxIndex = i;
        }
    }

    // Display details
    printf("\nCity Temperature Report:\n");

    for(i = 0; i < n; i++) {

        printf("\nCity: %s\n", city[i].cityName);
        printf("Total Temperature = %.2f\n", city[i].total);
        printf("Average Temperature = %.2f\n", city[i].average);

        // Heat Risk Classification
        if(city[i].average >= 40) {
            printf("Heat Risk: High Risk\n");
        }
        else if(city[i].average >= 30) {
            printf("Heat Risk: Moderate Risk\n");
        }
        else {
            printf("Heat Risk: Low Risk\n");
        }
    }

    // Display city with maximum total temperature
    printf("\nCity with Maximum Total Temperature: %s\n",
           city[maxIndex].cityName);

    return 0;
}