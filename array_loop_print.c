#include <stdio.h>

int main(){
    int temperatures[5] = {72, 75, 80, 68, 85};

    printf("Method 1: Printing with index\n");
    for (int i=0;i<5;i++){
        printf("Temperature %d: %d degrees\n",i + 1, temperatures[i]);
    }

    printf("\nMethod 2: Printing with labels");

    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    for (int i=0;i<5;i++){
        printf("%s's temperature: %d degress\n", days[i], temperatures[i]);
    }

    printf("\nMethod 3: Calculating average temperature\n");

    int total = 0;
    for (int i=0; i<5; i++){
        total += temperatures[i];
        printf("Adding %d degress\n", temperatures[i]);
    }
    float average = (float)total / 5;
    printf("Average temperature: %.1f degrees\n", average);

    return 0;
}