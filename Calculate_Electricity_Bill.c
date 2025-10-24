//simple_C_Program
/*
Name: MBUGUA PETER WAWERU 
Reg no: CT100/G/26268/25
Description: Calculate_Electricity_Bill
*/

#include <stdio.h>

float calculateElectricBill(int units) {
    float total = 0.0;
    
    if (units <= 100) {
        total = units * 10;
    } else if (units <= 200) {
        total = (100 * 10) + ((units - 100) * 15);
    } else {
        total = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }
    
    return total;
}

// Example usage:
int main() {
    int units = 250;
    float bill = calculateElectricBill(units);
    printf("Bill for %d units: KSh. %.2f\n", units, bill);
    return 0;
}