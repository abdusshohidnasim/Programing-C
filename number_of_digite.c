#include<stdio.h>
int main(int argc, char const *argv[])
{
    long long num, counter , c; 
    long long number ; 
    printf("Enter your Integer Number: "); 
    scanf("%lld",&num); 
      printf("Enter your Integer Number: "); 
    scanf("%lld",&number); 
    do
    {
        num /=10; 
        counter ++; 
    } while (num != 0);

    printf("degot number with do whiell lope  %lld",counter);
    for (int i = 0; number !=0; i++)
    {
      number /= 10; 
      c ++; 
    }
    printf("\n degot number with For lope  %lld",c);
    return 0;
}
