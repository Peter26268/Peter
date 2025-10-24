//simple_C_Program
/*
Name: MBUGUA PETER WAWERU 
Reg no: CT100/G/26268/25
Description: Conversation 
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

// Example usage:
int main() {
    float fahrenheit = 98.6;
    float celsius = convertToCelsius(fahrenheit);
    printf("%.1f°F = %.1f°C\n", fahrenheit, celsius);
    return 0;
}