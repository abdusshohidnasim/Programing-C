#include<stdio.h>
void rever(); 
int main(int argc, char const *argv[])
{
    printf("Enter your word"); 
   rever(); 
    return 0;
}
void rever(){
    char c ; 
    scanf("%c",&c); 
    if (c != '\n')
    {
        rever(); 
        printf("%c",c); 
    }
    
    
}
