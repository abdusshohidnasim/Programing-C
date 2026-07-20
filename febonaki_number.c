#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, toaltamap = 10;
    a = 0;
    b = 1;
    printf("%d \n%d \n", a, b);
    int i;
    for (i = 1; i < 9; i++)
    {
        c = a + b;
        printf("%d \n",c); 
        a = b;
        b = c;
        c = 0;
    };

    return 0;
}
