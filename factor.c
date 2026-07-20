#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number, i; 

    printf("Enter youer input number: "); 
    scanf("%d",&number);
    printf("\n"); 
    for (i =1; i <= number; i++)
    {
        if(number % i ==0){
            printf(" %d",i); 
        }
    }
    
    return 0;
}
