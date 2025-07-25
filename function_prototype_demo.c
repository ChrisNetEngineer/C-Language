#include <stdio.h>


int calculate_rectagle_area(int length, int width);
void print_greeting(char* name);


int main(){
    int length = 5;
    int width = 3;
    int area = calculate_rectagle_area(length, width);

    printf("Rectangle area: %d square units\n", area);
    print_greeting("LabEx Student");
    return 0;
}

int calculate_rectagle_area(int length, int width){
    return length * width;
}

void print_greeting(char* name){
    printf("Hello, %s! Welcome to function prototypes.\n",name);
}
