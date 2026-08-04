#include<stdio.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{//upper case to lower case converter with out laibari
    char lowe_case; 
    printf("Enter Your Enput Lower case: "); 
    scanf("%c",&lowe_case); 
    printf("out put to Upere case : %c \n ",lowe_case - 32 ); 


    // with libari 
printf("with libari "); 
char upcase; 
upcase = toupper(lowe_case); 
printf("out put your Upper Case with libar: %c\n",upcase); 
    return 0;
}
