#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int b = 0;
    for (a = 1; a <= 10; a++)
    {
        printf("%d\n", a);
        b += a;
    };
    printf("Tha sum number %d", b);
    printf("\n\n\n");

    printf("For Loope end \n \n \n ");
    while (a < 20)
    {
        printf("a = %d", a);
        a++;
    };
    printf("Whell Loop End\n\n\n ");
    int number, sum = 0;
    do
    {
        scanf("%d", &number);
        sum += number;

    } while (number != 0);

    printf("sum %d\n", sum);

    return 0;
}
