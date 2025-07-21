#include <stdio.h>

int main(){
    int age;
    char is_student;

    printf("Enter your age: ");
    scanf("%d",&age);

    if(age<18){
        printf("Are you a student? (y/n): ");
        scanf(" %c",&is_student);
        if(is_student == 'y'){
            printf("You are a minor and a student.\n"); 
        } else {
            printf("You are a minor and not a student.\n");
        }
    } else {
        printf("Are you a student? (y/n): ");
        scanf("%c",&is_student);
        if (is_student == 'y'){
            printf("You are an adult and a student.\n");
        } else{
            printf("You are an adult and not a student.\n");
        }
    }

    return 0;
}