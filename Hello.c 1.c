//simple C progra}[Hello world]
/*
Name: Peter
Reg:CT100/G/26268/25
Description: Hello world 
*/

#include <stdio.h>

int main() {
    float height, weight;
    char phone[10];

    // Prompt for height
    printf("Enter your height (in cm): ");
    scanf("%f", &height);

    // Prompt for phone number
    printf("Enter your phone number: ");
    scanf("%s", phone); 

    // Prompt for weight
    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    // Display entered data
    printf("\n--- Your Details ---\n");
    printf("Height: %.2f cm\n", height);
    printf("Phone Number: %s\n", phone);
    printf("Weight: %.2f kg\n", weight);

    return 0;
}