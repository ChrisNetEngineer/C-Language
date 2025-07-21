#include <stdio.h>

int main(){
    printf("Numbers from 1 to 10:\n");
    for(int i=1;i<=10;i++){
        printf("%d",i);
    }
    printf("\n\n");

    printf("Numbers from 10 to 1 in reverse:\n");
    for(int i=10;i>=1;i--){
        printf("%d",i);
    }
    printf("\n");
    return 0;
}