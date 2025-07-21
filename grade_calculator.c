#include <stdio.h>

int main(){

    int score = 85;

    if(score >=90){
        printf("Excellent! Your grade is A.\n");
    } else if(score>=80){
        printf("Great job! Your grade is B.\n");
    } else if(score>=70){
        printf("Good work! Your grade is C.\n");
    } else if(score>=60){
        printf("You passed. Your grade is D.\n");
    } else {
        printf("Sorry, you failed. Your grade is G.\n");
    }
    return 0;
}