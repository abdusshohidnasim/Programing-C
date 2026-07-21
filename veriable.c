#include <stdio.h>
int a = 87;
void display(); 
int main(int argc, char const *argv[])
{
    printf("Global Veriable a = %d", a);
    display();
    display();
    return 0;
}

void display()
{
    static int b = 1;
    b+= 4;
    printf("static variable a = %d\n", b);
}
