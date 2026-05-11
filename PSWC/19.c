#include <stdio.h>

struct Satellite {
    int satelliteId;
    float batteryLevel;
    float orbitAltitude;
    float payloadMass;
};

// Function to check safety flag
int checkFlag(struct Satellite *s) {

    if(s->batteryLevel < 25 ||
       s->payloadMass > 500 ||
       s->orbitAltitude > 2000) {
        return 1; // Flagged
    }

    return 0; // Safe
}

int main() {

    struct Satellite s;

    // Input details
    printf("Enter Satellite ID: ");
    scanf("%d", &s.satelliteId);

    printf("Enter Battery Level: ");
    scanf("%f", &s.batteryLevel);

    printf("Enter Orbit Altitude: ");
    scanf("%f", &s.orbitAltitude);

    printf("Enter Payload Mass: ");
    scanf("%f", &s.payloadMass);

    // Function call
    if(checkFlag(&s)) {
        printf("\nSatellite is FLAGGED.\n");
    } else {
        printf("\nSatellite is SAFE.\n");
    }

    return 0;
}