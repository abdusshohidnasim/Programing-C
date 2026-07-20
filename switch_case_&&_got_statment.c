#include <stdio.h>
int main(int argc, char const *argv[])
{
    int fristNumber, secendNumber;
    char operator;
    jump:
    printf("\nEnter your Frist Number: ");
    scanf("%d", &fristNumber);
    printf("\nEnter your Operator: ");
    scanf(" %c", &operator);
    printf("\nEnter your Secend Number: ");
    scanf("%d", &secendNumber);

    switch (operator)
    {
    case '+':
        printf("%d + %d = %d", fristNumber, secendNumber, fristNumber + secendNumber);
        break;
    case '-':
        printf("%d - %d = %d", fristNumber, secendNumber, fristNumber - secendNumber);
        break;

    case '*':
        printf("%d * %d = %d", fristNumber, secendNumber, fristNumber * secendNumber);
        break;
    case '/':
        printf("%d / %d = %d", fristNumber, secendNumber, fristNumber / secendNumber);
        break;
    default:
    printf("Enter your envalid number"); 
    goto jump
       ;
    }

    return 0;
}
