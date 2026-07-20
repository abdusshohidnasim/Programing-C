#include <stdio.h>
int main()
{
    int d;
    for (d = 1; d <=10; d++)
    {
      //  printf("number : %d \n",d);
        if (d == 5)
        {
            continue;
        }
         printf("number : %d \n",d);
    }

    return 0;
}
