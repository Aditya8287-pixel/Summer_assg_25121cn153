#include <stdio.h>

struct Ticket {
    int ticketNo;
    char name[50];
    int seats;
    float price, total;
};

int main() {
    struct Ticket t;

    printf("===== Ticket Booking System =====\n");

    printf("Enter Ticket Number: ");
    scanf("%d", &t.ticketNo);

    printf("Enter Customer Name: ");
    scanf("%s", t.name);

    printf("Enter Number of Seats: ");
    scanf("%d", &t.seats);

    printf("Enter Price per Ticket: ");
    scanf("%f", &t.price);

    
    t.total = t.seats * t.price;

    
    printf("\n===== Booking Details =====\n");
    printf("Ticket Number   : %d\n", t.ticketNo);
    printf("Customer Name   : %s\n", t.name);
    printf("Seats Booked    : %d\n", t.seats);
    printf("Price per Ticket: %.2f\n", t.price);
    printf("Total Amount    : %.2f\n", t.total);

    printf("\nTicket Booked Successfully!\n");

    return 0;
}
