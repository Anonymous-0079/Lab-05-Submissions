#include <stdio.h>

int main() {
    int ridetype, basefare;
    char distance;
  
    printf("Select ride type 1 = Economy, 2 = Business, 3 = Luxury: ");
    scanf("%d", &ridetype);

    printf("Enter distance type: s = short, l = long: ");
    scanf(" %c", &distance); 

    if (distance == 's' || distance == 'S') {
        basefare = 100;
    }else if (distance == 'l' || distance == 'L') {
        basefare = 300;
    }else {
        printf("Invalid distance type entered.\n");
    }

    printf("Selected ride type is %d and base fare is %d\n", ridetype, basefare);

    return 0;
}

