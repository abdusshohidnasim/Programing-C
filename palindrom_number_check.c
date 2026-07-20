#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number, reverse = 0, lenth = 0, lenth_number, prever = 0, checkpalindormnumber;

    printf("Enter your number: ");
    scanf("%d", &number);
    lenth_number = number;
    checkpalindormnumber = number; 

    for (int i = 1; lenth_number != 0; i++)
    {
        lenth_number = lenth_number / 10;
        lenth = lenth + 1;
        printf("|number length \n %d", lenth_number);
    }
    printf("\n number length %d", lenth);

    for (int j = 0; j < lenth; j++)
    {

        prever = number % 10;
        reverse = (reverse *10) +prever; 
        number /= 10;
    }
    printf("\nreversh numbner %d", reverse);
    if (checkpalindormnumber == reverse)
    {
        printf("\npalindorm number");
    }
    else
    {
        printf("\nis not plindrom number ");
        /* code */
    }

    return 0;
}
