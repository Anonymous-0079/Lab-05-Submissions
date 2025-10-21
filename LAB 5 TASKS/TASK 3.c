#include <stdio.h>
#include <math.h>

int main() {
    int requests;
    float SurgeMultiplier;

    printf("Enter number of ride requests in the area: ");
    scanf("%d", &requests);

    SurgeMultiplier = sqrt(requests) / 2;

    if (SurgeMultiplier > 3) {
        SurgeMultiplier = 3;
    }

    printf("Final surge multiplier = %.2f\n", SurgeMultiplier);

    return 0;
}

