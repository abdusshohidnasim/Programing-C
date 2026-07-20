#include <stdio.h>
int main()
{
    int multiplicatonNumber;
    printf("Type your Multiplicaton Numer: ");
    scanf("%d",&multiplicatonNumber);
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", multiplicatonNumber, i, multiplicatonNumber * i);
    }

    return 0;
}
