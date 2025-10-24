//simple_C_Program
/*
Name: MBUGUA PETER WAWERU 
Reg no: CT100/G/26268/25
Description: Calculate_fare
*/

#include <stdio.h>

float calculateFare(float distance) {
    float rate = 50.0; // KSh. per kilometer
    return distance * rate;
}

// Example usage:
int main() {
    float distance = 10.0;
    float fare = calculateFare(distance);
    printf("Fare for %.1f km: KSh. %.2f\n", distance, fare);
    return 0;
}