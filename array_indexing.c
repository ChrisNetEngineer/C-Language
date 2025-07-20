#include <stdio.h>

int main(){
    int grades[5] = {85,92,11,2,3};

    printf("First grade (index 0): %d", grades[0]);
    printf("Third grade (index 2): %d", grades[2]);

    printf("\nBefire modification:\n");
    for(int i=0;i<5;i++){
        printf("grades[%d] = %d\n",i, grades[i]);
    }

    grades[1] = 95;
    grades[4] = 87;

    printf("\nAfter modification:\n");
    for(int i=0;i<5;i++){
        printf("grades[%d] =%d\n",i, grades[i]);
    }

    int total =0;
    for(int i=0;i<5;i++){
        total+=grades[i];
    }
    float average = (float)total / 5;
    printf("\nAverage grade: %.2f\n",average);

    return 0;
}