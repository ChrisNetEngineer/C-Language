#include <stdio.h>

int main(){

    int x = 5, y = 10, z = 15;

    printf("Logical AND (&&) Demonstrations:\n");
    printf("(x < y) && (x < z) is %d\n",(x<y) && (y<z));
    printf("(x > y) && (x < z) is %d\n",(x>y) && (y<z));

    printf("\nLogical OR (||) Demostrations:\n");
    printf("(x > y) || (y < z) i9s %d\n", (x > y) || (y < z));
    printf("(x > y) || (y > z) i9s %d\n", (x > y) || (y > z));

    printf("\nLogical NOT (!) Demonstrations:\n");
    printf("!(x < y) is %d\n",!(x < y));
    printf("!(x > y) is %d\n", !(x > y));

    printf("\nComplex Logical Expressions:\n");
    int a = 20, b = 30, c = 40;
    printf("((a < b) && (b < c)) is %d\n", ((a < b) && (b < c)));
    printf("((a > b) || (b < c)) is %d\n", ((a > b) || (b < c)));
    return 0;
}