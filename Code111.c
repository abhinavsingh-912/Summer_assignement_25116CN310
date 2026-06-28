#include <stdio.h>

int main() {
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, seats;

    while (1) {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of tickets to book: ");
                scanf("%d", &seats);

                if (bookedSeats + seats <= totalSeats) {
                    bookedSeats += seats;
                    printf("%d ticket(s) booked successfully!\n", seats);
                } else {
                    printf("Not enough seats available!\n");
                }
                break;

            case 2:
                printf("Total Seats     : %d\n", totalSeats);
                printf("Booked Seats    : %d\n", bookedSeats);
                printf("Available Seats : %d\n", totalSeats - bookedSeats);
                break;

            case 3:
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &seats);

                if (seats <= bookedSeats) {
                    bookedSeats -= seats;
                    printf("%d ticket(s) cancelled successfully!\n", seats);
                } else {
                    printf("Invalid cancellation request!\n");
                }
                break;

            case 4:
                printf("Thank you for using Ticket Booking System!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}