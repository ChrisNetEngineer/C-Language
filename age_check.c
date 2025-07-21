#include <stdio.h>

int main(){
    int age = 16;

    if (age>=18){
        printf("You are an adult and can vote.\n");
    } else {
        printf("You are a minor and cannot vote yet.\n");
    }
    return 0;
}