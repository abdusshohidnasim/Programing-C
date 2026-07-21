#include <stdio.h>
int recartive(int n);

int main()
{
    int sum;
    sum = recartive(10);
    printf("total number of%d",sum);

    return 0;
};
int recartive(int n)
{
    if (n != 0)
    {
        return n + recartive(n - 1);
    }
    else
    {
        return n;
    }
}
