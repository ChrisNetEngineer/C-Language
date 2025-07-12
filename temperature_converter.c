//Converting Celsius temperature to Fahrenheit 
//Formula is F = (C*9/5) + 32
#include <stdio.h>

int main(){
    double Celsius;
    double Fahrenheit; 
    printf("Enter temperature in Celsius: ");
    scanf("%lf",&Celsius);

    Fahrenheit = (Celsius*9/5)+32;
    printf("%.2lf\u00B0C is equal to %.2lf\u2109\n",Celsius,Fahrenheit);
    
    return 0;
}