#include <stdio.h>

int main(){
    
    int scores[5] = {1,2,3,4,5};

    int temperature[5] = {10,20,40};

    int ages[5] = {0};

    printf("\nScore array:\n");
    for(int i=0;i<5;i++){
        printf("scores[%d] = %d\n", i, scores[i]);
    }

    printf("\nTemperatures array:\n");
    for(int i=0;i<5;i++){
        printf("temperatures[%d] = %d\n",i, temperature[i]);
    }

    printf("\nAges array:\n");
    for(int i=0;i<5;i++){
        printf("ages[%d] = %d\n",i, ages[i]);
    }




    return 0;
}