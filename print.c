// Arith matic operator use
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 6;
    int c = 10;
    int d = 2;
    printf("%d+%d = %d", a, b, a + b);
    int e = a + b;
    printf("e= %d", e);
    // subcirption  ;
    int g = a - b;
    printf("g %d\n", g);
    // increment
    printf("a incremetn %d\n", a++);
    // decrement
    printf("b decrement %d\n", b--);
    printf("a updated vaou ");
    printf("%d\n", a);
    printf(" a +=b %d\n", a += b);
    return 0;
}
