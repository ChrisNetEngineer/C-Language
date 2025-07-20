#include <stdio.h>

int main(){
    int numbers[5] = {10,20,30,40,50};
    int max = numbers[0];
    int min = numbers[0];

    for(int i=0; i<5;i++){
        if (numbers[i]>max){
            max = numbers[i];
        }
        if (numbers[i]<min){
            min = numbers[i];
        }
    }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}