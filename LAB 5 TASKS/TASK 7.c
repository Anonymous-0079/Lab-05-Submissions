#include <stdio.h>
#include <math.h>

int main() {
    
    int age, balance;
    printf("Enter passenger age: ");
    scanf("%d", &age);
    printf("Enter account balance: ");
    scanf("%d", &balance);

    if (age < 21) {
        printf("Not eligible for ride (underage)\n");
        return 0;
    }else if (balance < 200) {
        printf("Not eligible (insufficient balance)\n");
        return 0;
    }

    int ridetype;
    float distance;
    printf("Select ride type 1 = Economy, 2 = Business, 3 = Luxury: ");
    scanf("%d", &ridetype);
    printf("Enter distance in km: ");
    scanf("%f", &distance);

    float base_perKm;
     if (ridetype == 1){
    	base_perKm = 50;
	}else if (ridetype == 2){
		base_perKm = 100;
	}else
		base_perKm = 200;

    int requests;
    printf("Enter number of ride requests in the area: ");
    scanf("%d", &requests);

    float SurgeMultiplier;
    SurgeMultiplier = sqrt(requests) / 2;
    if (SurgeMultiplier > 3) {
        SurgeMultiplier = 3;
    }

    
    float rating, driver_dist;
    printf("Enter driver rating between 1 to 5: ");
    scanf("%f", &rating);
    printf("Enter driver distance from passenger in km: ");
    scanf("%f", &driver_dist);

    if (rating >= 4 && driver_dist <= 5)
        printf("Driver assigned: Top driver nearby\n");
    else if (rating >= 3 && driver_dist <= 10)
        printf("Driver assigned: Average driver\n");
    else {
        printf("No suitable driver available\n");
        return 0;
    }

    float fare;
    fare = distance * base_perKm * SurgeMultiplier;

    int loyaltyPoints;
    printf("Enter loyalty points: ");
    scanf("%d", &loyaltyPoints);

    float discount;
    float final_fare;
    discount = (loyaltyPoints > 1000) ? 20 : 5;
    final_fare = fare * (1 - discount/ 100);

    
    if (ridetype == 1){
    	printf("Ride Type: Economy\n");
	} 
    else if (ridetype == 2){
    	printf("Ride Type: Business\n");
	} 
    else 
		printf("Ride Type: Luxury\n");
    printf("Distance: %.1f km\n", distance);
    printf("Surge Multiplier: %.2f\n", SurgeMultiplier);
    printf("Original Fare: %.2f\n", fare);
    printf("Discount Applied: %.1f%%\n", discount);
    printf("Final Fare: %.2f\n", final_fare);

    return 0;
}



