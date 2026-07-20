#include <stdio.h>
int main(int argc, char const *argv[])
{
    char c;
    printf("Enter character: ");
    if (scanf(" %c", &c) != 1)
        return 1;
    if (c >= 'a' && c <= 'z')
    {
        printf("%c is a lowercase alphabet\n", c);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("%c is an uppercase alphabet\n", c);
    }
    else
    {
        printf("%c is not an alphabet\n", c);
    }

    return 0;
}
