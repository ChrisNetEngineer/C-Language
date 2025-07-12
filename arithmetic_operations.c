#include <stdio.h>

int main(){

    int a = 20, b = 5;
    int sum = a + b;
    printf("Addition: %d + %d = %d\n", a,b,sum);

    int difference = a - b;
    printf("Subtraction: %d - %d = %d\n", a,b,difference);
    
    int product = a * b;
    printf("Multiplication: %d * %d = %d\n",a,b,product);

    int quotient = a / b;
    printf("Division: %d / %d = %d\n",a,b,quotient);
    
    int remainder = a%b;
    printf("Modulus: %d %% %d = %d\n",a,b,remainder);

    float x = 10.5, y = 3.2;
    float float_sum = x + y;
    float float_difference = x - y;
    float float_product = x * y;
    float float_quotient = x / y;

    printf("\nFloating-point Arithmetic:\n");
    printf("Addition: %.2f + %.2f = %.2f\n",x,y,float_sum);
    printf("Subtraction: %.2f - %.2f = %.2f\n",x,y,float_difference);
    printf("Mulplication: %.2f * %.2f = %.2f\n",x,y,float_product);
    printf("Division: %.2f / %.2f = %.2f\n",x,y,float_quotient);
    
    return 0;
}