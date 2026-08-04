#include <stdio.h>
int main(int argc, char const *argv[])
{

    int number1 = -10;
    int number2 = 5;

    number1 = number1 + number2;

    printf("tamp %d \n",number1);

    number2 = number1 - number2;
  
    printf("tamp %d\n",number2);
  
    number1 = number1 - number2; 
  
    printf("numeber 1 : %d\nm", number1);
  
    printf("numeber 2 : %d\n", number2);
    return 0;
}
