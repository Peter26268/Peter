//simple_C_program
/*
Name: MBUGUA PETER WAWERU 
Reg no:CT100/G/26268/25
Description: Bank_ATM
*/

#include <stdio.h>

int main() {
    double balance;
    
    printf("Enter initial account balance: ");
    scanf("%lf", &balance);
    
    while(balance > 0) {
        double withdrawal;
        
        printf("\nCurrent balance: $%.2f\n", balance);
        printf("Enter amount to withdraw: ");
        scanf("%lf", &withdrawal);
        
        balance -= withdrawal;
        
        if(balance <= 0) {
            printf("Final balance: $%.2f\n", balance);
            printf("Transaction completed. Balance is zero or negative.\n");
            break;
        }
    }
    
    return 0;
}