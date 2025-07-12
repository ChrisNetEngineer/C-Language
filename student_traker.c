#include <stdio.h>

int main() {
    char name[51];  // 50 characters + null terminator
    int age, grade_level;
    float academic_score;

    // TODO: Prompt the user for student details using printf() and scanf()
    printf("Enter student name: ");
    scanf("%[^\n]s", name);
    printf("Enter student age: ");
    scanf("%d",&age);
    printf("Enter grade level: ");
    scanf("%d",&grade_level);
    printf("Enter academic score: ");
    scanf("%f",&academic_score);

    // TODO: Display the collected student information with formatted output
    printf("--- Student Information ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Grade Level: %d\n",grade_level);
    printf("Academic Score: %.2f\n", academic_score);
    return 0;
}
