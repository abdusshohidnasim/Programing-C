#include <stdio.h>
int main(int argc, char const *argv[])
{

    int factaialnumber;
    int totalnumber = 1;
    printf("Enter your factorila number: ");
    scanf("%d", &factaialnumber);
    printf("your input number %d \n", factaialnumber);
    if (factaialnumber == 0 || factaialnumber == 1)
    {
        printf("Factoil nimber of if : 1");
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
        printf("factroil numer else : %d\n and input number %d", totalnumber);
    }

    return 0;
}
