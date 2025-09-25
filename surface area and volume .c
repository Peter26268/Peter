//simple C program
/*
Name: Peter
Reg:CT100/G/26268/25
Description: surface area and volume 
*/

#include <stdio.h>

int main() {
    //variable declaration 
    float radius, height, pie, area, volume;
    
    //promt user to enter 
    printf("Enter radius:");
    scanf("%f",&radius);
    
    //Promt user to enter height 
    printf("\n Enter the height:");
    scanf("%f",&height);
    
    //Prompt user to enter pie 
    printf("\n Enter pie:");
    scanf("%f",&pie);
    
    // compute surface area and volume 
    area = height * radius * 2* pie + 2* pie * radius* radius;
    volume = 2* radius * height * pie;
    
    //Display the surface area 
    printf("\n surface area- %f", area);
    printf("\n volume- %f", volume);
    return 0;
}