#include <stdio.h>

int main(){
    
    int score;
    char grade;
    printf("Please enter your score: ");
    scanf("%d",&score);

    if(score>=90){
        grade = 'A';
        printf("Your grade is: %c",grade);
    } else if (score >=80 && score<90){
        grade = 'B';
        printf("Your grade is: %c",grade);
    } else if(score>=70 && score<80){
        grade = 'C';
        printf("Your grade is: %c", grade);
    } else if(score>=60 && score<70){
        grade = 'D';
        printf("Your grade is: %c",grade);
    } else if(score>=0 && score<60){
        grade = 'F';
        printf("Your grade is: %c",grade);
    } else{
        printf("Please enter a valid score!");
    }
    return 0;
}