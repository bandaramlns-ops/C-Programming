#include <stdio.h>

int main() {
    int num1, num2;
    char art;
    
    // Get the first number
    printf("Enter number 01: ");
    scanf("%d", &num1);
    
    // Get the operator (+, -, *, /)
    printf("Enter what u wanna do (+, -, *, /): ");
    scanf(" %c", &art); // Space before %c fixes the newline bug
    
    // Get the second number
    printf("Enter number 02: ");
    scanf("%d", &num2);
    
    // Perform the calculation using a switch statement
    switch(art) {
        case '+':
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
            
        case '-':
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
            
        case '*':
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
            
        case '/':
            if (num2 != 0) {
                // Cast to float for accurate decimal division
                printf("Result: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;
            
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }
    
    return 0;
}
