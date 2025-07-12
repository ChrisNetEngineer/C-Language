#include <stdio.h>

int main(){

    char operator;
    double number1, number2, result;

    printf("--- Simple Calcultor ---\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter 2 numbers: ");
    scanf("%lf %lf",&number1, &number2);
    // %lf is for double variable

    switch(operator){
        case '+':
            result = number1 + number2;
            printf("%.2lf + %.2lf = %.2lf\n",number1, number2, result);
            break;
        
        case '-':
            result = number1 - number2;
            printf("%.2lf - %.2lf = %.2lf\n", number1, number2, result);
            break;

        case '*':
            result = number1 * number2;
            printf("%.2lf * %.2lf = %.2lf\n", number1, number2, result);
            break;
        
        case '/':
            if (number1 != 0){
                result = number1 / number2;
                printf("%.2lf / %.2lf = %.2lf\n", number1, number2, result);
            } else {
                printf("Error! Division by zero is not allowed!\n");
            }
            break;
            
        default:
            printf("Error! Operator is not correct\n");
    }
    
    
    return 0;
}