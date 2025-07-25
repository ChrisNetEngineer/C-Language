#include <stdio.h>

void greet(char* name);
int add_numbers(int a,int b);

int main(){
    greet("LabEx User");

    int result = add_numbers(5,7);
    printf("5 + 7 =%d",result);
    return 0;
}

void greet(char* name){
    printf("Hello, %s! Welcome to functions in C.\n",name);
}

int add_numbers(int a, int b){
    return a+b;
}