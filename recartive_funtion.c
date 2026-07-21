#include <stdio.h>
int recursive(int n);

int main()
{
    int sum;
    sum = recursive(10);
    printf("total number of%d \n", sum);

    return 0;
};
int recursive(int n)
{
    if (n != 0)
    {
        return n + recursive(n - 1);
    }
    else
    {
        return n;
    }
}
