#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number, armg = 0, oringinal, lenth = 0, lenthcount, copynumber, onedigit = 0, onedigiarmg = 0;
    printf("entger your number");
    scanf("%d", &number);
    lenthcount = number;
    oringinal = number;
    copynumber = number;

    for (int i = 0; lenthcount != 0; i++)
    {
        lenthcount = lenthcount / 10;
        lenth += 1;
    }
    ////////////////////////
    for (int j = 0; copynumber != 0; j++)
    {
        onedigit = copynumber % 10;
        copynumber /= 10;
        onedigiarmg = onedigit;
        printf("ongigint number oa =========== %d\n", onedigit);
        for (
            int l = 0; l <lenth -1; l++)
        {

            onedigiarmg = onedigiarmg * onedigit;
            printf("ondigint gon number %d \n", onedigiarmg);
        }
        armg += onedigiarmg;
        printf("arim number of %d \n", armg);
        onedigiarmg = 0;
    }
    printf("lenth numbner %d\n", lenth);
    printf("armgnuber  %d\n", armg);

    if (armg == oringinal)
    {
       printf("number of arostong number %d",armg); 
    }else
    {
        printf("is not arostong number %d",armg); 
    }
    
    

    return 0;
}
