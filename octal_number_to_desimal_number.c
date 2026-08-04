#include <stdio.h>
int main(int argc, char const *argv[])
{

    // octal numbr to desimal number
    int number;
    printf("input your octalnlumber : ");
    scanf("%o", &number);
    printf("outpur of disimal number: %d\n", number);

    // disimal nmbner to octal number
    int number1;
    printf("input your disimalmumber : ");
    scanf("%d", &number1);
    printf("outpur of ocatl number number: %o\n", number1);

    // desimal to hexadesimal
    printf("helxadesiml %x", &number1);
    return 0;
}
