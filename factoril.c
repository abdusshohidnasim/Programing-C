#include <stdio.h>
int main(int argc, char const *argv[])
{

    int factaialnumber;
    int totalnumber = 1;
    printf("Enter your factorila number: ");
    scanf("%d", &factaialnumber);
    printf("your input number %d \n", factaialnumber);

    for (factaialnumber; factaialnumber > 1; factaialnumber--)
    {

        totalnumber = totalnumber * factaialnumber;
    }

    printf("with out condition %d\n", totalnumber);
    if (factaialnumber == 0 || factaialnumber == 1)
    {
        printf("Factoil nimber of if : 1 %d \n", totalnumber);
    }
    else if (factaialnumber < 1)
    {
        printf("else if number %d", factaialnumber);
        for (factaialnumber; factaialnumber > 1; factaialnumber--)
        {

            totalnumber = totalnumber * factaialnumber;
        }
    }
    else
    {
        printf("factroil numer else : %d\n and input number %d\n", totalnumber, factaialnumber);
    }

    return 0;
}
