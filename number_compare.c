#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;

    if(a<b){
        printf("%d is less than %d\n",a,b);
    }
    if(a==b){
        printf("%d is equal to %d\n",a,b);
    }
    if(a>b){
        printf("%d is greater than %d\n",a,b);
    }

    return 0;
}