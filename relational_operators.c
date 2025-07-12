#include <stdio.h>

int main(){

    int a = 10, b = 20, c = 10;

    printf("Greater than comparison:\n");
    printf("%d > %d is %d\n",a,b,a>b);
    printf("%d > %d is %d\n",b,a,b>a);

    printf("\nLess than comparison:\n");
    printf("%d < %d is %d\n",a,b,a<b);
    printf("%d < %d is %d\n",b,a,b<a);

    printf("\nEqual to comparison:\n");
    printf("%d == %d is %d\n", a, b, a == b);
    printf("%d == %d is %d\n", a, c, a == c);

    printf("\nOther comparisons:\n");
    printf("%d >= %d is %d\n", a, c, a >= c);  
    printf("%d <= %d is %d\n", a, b, a <= b);  
    printf("%d != %d is %d\n", a, b, a != b);

    return 0;
}
