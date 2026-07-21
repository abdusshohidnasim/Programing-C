#include <stdio.h>
void armngstrong(int n);
int main()
{
    armngstrong(371);
    return 0;
}
void armngstrong(int n)
{
    int number = n, lenth = 0, totalnumber = 0, armgst ,j,k =1;
    printf("origin number %d", number);
    for (int i = 0; number != 0; i++)
    {
        number /= 10;
        lenth += 1;
    }
    number = n;
    printf("length %d ", lenth);

    for (int i = 0; i < lenth; i++)
    {
        j = number % 10;
        number /= 10;
        printf("on digit numbe of j %d \n", j); 
        for (int o = 0; o < lenth ; o++)
        {
        
             k = k* j;
            printf("k %d \n", k); 
            
        }
        totalnumber +=k; 
        k = 1; 

        printf("total number of %d \n",totalnumber); 
        armgst += totalnumber;


        printf("armgstrongnumber  number of %d \n",armgst); 

        totalnumber = 0; 
    }

    printf("armgstong number of %d \n",armgst); 


    if (n == armgst)
    {
        printf("armstrong number %d\n", armgst); 
    }
    else
    {
        printf(" not arm strong number\n"); 
    }
    
    
}
