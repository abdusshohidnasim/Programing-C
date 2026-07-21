#include <stdio.h>
long int fackrecartion(long int n);
int main()
{
    long int n = 5;
    long int result;
    result = fackrecartion(n);
    printf("resutl %ld", result);

    return 0;
}
long int fackrecartion(long int n)
{
    if (n != 0)
    {
        return n * fackrecartion(n - 1);
    }
    else
    {
        return 1;
    }
}
