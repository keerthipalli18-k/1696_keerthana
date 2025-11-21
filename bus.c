#include <stdio.h>

struct Bus {
    int busNumber;
    char driverName[50];
    char source[50];
    char destination[50];
};

int main() {
    struct Bus buses[10];
    int n, i;

    printf("Enter number of buses: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of bus %d:\n", i + 1);
        printf("Bus Number: ");
        scanf("%d", &buses[i].busNumber);

        printf("Driver Name: ");
        scanf("%s", buses[i].driverName);

        printf("Source: ");
        scanf("%s", buses[i].source);

        printf("Destination: ");
        scanf("%s", buses[i].destination);
    }

    printf("\n--- Bus Fleet Details ---\n");
    for(i = 0; i < n; i++) {
        printf("\nBus %d:", i + 1);
        printf("\nBus Number: %d", buses[i].busNumber);
        printf("\nDriver Name: %s", buses[i].driverName);
        printf("\nRoute: %s -> %s\n", buses[i].source, buses[i].destination);
    }

    return 0;
}