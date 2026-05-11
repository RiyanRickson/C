#include <stdio.h>
#include <string.h>

struct HotelBooking {
    int bookingId;
    char guestName[50];
    float roomCost;
    int hoursBeforeCheckIn;
};

int main() {
    int n, i;
    float refund, totalRefund = 0;

    printf("Enter number of bookings: ");
    scanf("%d", &n);

    struct HotelBooking h[n];

    // Input booking details
    for(i = 0; i < n; i++) {

        printf("\nEnter details for booking %d\n", i + 1);

        printf("Booking ID: ");
        scanf("%d", &h[i].bookingId);

        getchar(); // remove newline character

        printf("Guest Name: ");
        fgets(h[i].guestName, sizeof(h[i].guestName), stdin);

        // Remove newline from fgets
        h[i].guestName[strcspn(h[i].guestName, "\n")] = '\0';

        printf("Room Cost: ");
        scanf("%f", &h[i].roomCost);

        printf("Hours Before Check-In: ");
        scanf("%d", &h[i].hoursBeforeCheckIn);
    }

    // Calculate and display refunds
    printf("\nRefund Details:\n");

    for(i = 0; i < n; i++) {

        if(h[i].hoursBeforeCheckIn >= 48) {
            refund = h[i].roomCost * 0.90;
        }
        else if(h[i].hoursBeforeCheckIn >= 24) {
            refund = h[i].roomCost * 0.75;
        }
        else if(h[i].hoursBeforeCheckIn >= 12) {
            refund = h[i].roomCost * 0.50;
        }
        else {
            refund = 0;
        }

        printf("\nBooking ID: %d\n", h[i].bookingId);
        printf("Guest Name: %s\n", h[i].guestName);
        printf("Refund Amount: %.2f\n", refund);

        totalRefund += refund;
    }

    printf("\nTotal Refund Amount = %.2f\n", totalRefund);

    return 0;
}