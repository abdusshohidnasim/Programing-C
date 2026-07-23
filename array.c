#include <stdio.h>
int main(int argc, char const *argv[])
{
    int array[] = {
        34,
        43,
        54,
        65,
        76,
    };
    printf("array %d", array[3]);
    array[5] = 45989;
    printf("array %d", array[5]);

    return 0;
}
