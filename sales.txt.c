//simple C program 
/*
Name: MBUGUA PETER WAWERU 
REG NO: CT100/G/26268/25
DESCRIPTION: sales
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    double amount, total = 0.0;
    char line[100];
    
    // Open file for reading
    file = fopen("sales.txt", "r");
    
    if (file == NULL) {
        printf("Error opening file! File may not exist.\n");
        return 1;
    }
    
    // Read each line and calculate total
    while (fgets(line, sizeof(line), file) != NULL) {
        // Convert string to double
        amount = atof(line);
        total += amount;
    }
    
    // Display results
    printf("Daily Sales Summary\n");
    printf("===================\n");
    printf("Total sales for the day: $%.2f\n", total);
    
    // Close the file
    fclose(file);
    printf("File closed successfully.\n");
    
    return 0;
}