#include <stdio.h>
#include <math.h>

int main()
{
    int number = 3479, revers = 0, loc;
    int lenth = log10(number) + 1;

    for (int i = 0; i < lenth; i++)
    {
        loc = number % 10;
        number /= 10;
        revers = (revers * 10) + loc;
    }
    printf("reversnumber = %d", revers);
    return 0;
}