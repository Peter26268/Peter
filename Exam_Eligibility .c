//simple program 
/*
Name: Mbugua_Peter_Waweru
Reg no: CT100/G/26268/25
Description: Exam Eligiblity 
*/

#include <stdio.h>

int main() {
    float attendance, average_marks;
    
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    
    printf("Enter average marks: ");
    scanf("%f", &average_marks);
    
    if (attendance >= 75 && average_marks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }
    
    return 0;
}