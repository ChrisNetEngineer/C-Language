#include <stdio.h>

int is_even_number(int number);

int main(){
    int number = 2;
    if (is_even_number(number)){
        printf("Yes! The number is even number");
    } else {
        printf("No! The number is odd number");
    }
    return 0;
}

int is_even_number(int number){
    if (number % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}