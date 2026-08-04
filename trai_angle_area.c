#include <stdio.h>
int main(int argc, char const *argv[])
{
    float base, height, area, j;
    printf("input your base: \n");
    scanf("%f", &base);
    printf("input your height: \n");
    scanf("%f", &height);
    j = 1.0 / 2;
    printf("j= %f", j);
    area = (float)1 / 2 * base * height;
    printf("area : %.2f\n", area);
    return 0;
}
