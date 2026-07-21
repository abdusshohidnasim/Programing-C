#include <stdio.h>
int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    if (a <= b && c <= b)
    {
        printf("lurgest number of b %d", b);
    }
    else if (a >= b && a >= c)
    {
        printf("lurgest Number of a %d", a);
    }
    else
    {
        printf("lurgest Number of c %d", c);
    }

    return 0;
}                                                                            