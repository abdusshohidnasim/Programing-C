#include<stdio.h>
int main(int argc, char const *argv[])
{
    float c , f; 
    printf("enput of c : "); 
    scanf("%f",&c); 
    printf("faranhide : %.2f",((float)c*1.8)+32); 


       
    printf("enput of f : "); 
    scanf("%f",&f); 
    printf("centeget : %.2f",(f-32)/1.8); 

    return 0;
}
