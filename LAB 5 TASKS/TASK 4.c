#include <stdio.h>
#include <math.h>

int main() {
    int ridetype, requests, base_perKm;
    float SurgeMultiplier, distance, totalfare;

    printf("Enter distance in km: ");
    scanf("%f", &distance);

    printf("Select ride type 1 = Economy, 2 = Business, 3 = Luxury: ");
    scanf("%d", &ridetype);

    if (ridetype == 1){
    	base_perKm = 50;
	}else if (ridetype == 2){
		base_perKm = 100;
	}else
		base_perKm = 200;

    printf("Enter number of ride requests in the area: ");
    scanf("%d", &requests);
    SurgeMultiplier = sqrt(requests) / 2;
    if (SurgeMultiplier > 3){
    	SurgeMultiplier = 3;
	} 

    totalfare = distance * SurgeMultiplier * base_perKm;
    printf("Total fare = %.2f\n", totalfare);

    return 0;
}

