#include <stdio.h>

int add_numbers(int a,int b);
void print_greeting(char* name);
float calculate_average(float a, float b, float c);

int main(){
    printf("Addition Result: %d\n",add_numbers(5,7));
    int sum = add_numbers(10,20);
    printf("Sum of 10 and 20 is: %d\n",sum);

    print_greeting("LabEx Student");

    float avg = calculate_average(10.5,20.3,30.7);
    printf("Average of numbeers: %.2f\n",avg);

    return 0;
}

int add_numbers(int a, int b){
    return a + b;
}

void print_greeting(char* name){
    printf("Hello, %s! Welcome to function calls.\n",name);
}

float calculate_average(float a,float b,float c){
    return (a+b+c)/3;
}