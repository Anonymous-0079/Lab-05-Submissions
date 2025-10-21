#include <stdio.h>

int main() {
    float rating, driver_distance;
    
    printf("Enter driver rating between 1 - 5: ");
    scanf("%f", &rating);
    printf("Enter driver distance from passenger in km: ");
    scanf("%f", &driver_distance);

    if (rating >= 4 && driver_distance <= 5) {
        printf("Top driver nearby\n");
    }else if (rating >= 3 && driver_distance <= 10) {
        printf("Average driver assigned\n");
    }else {
        printf("No suitable driver available\n");
    }

    return 0;
}

