#include<stdio.h>
int primecheckFuntion(int n); 
int main(int argc, char const *argv[])
{
    int flag = 1; 
int result = primecheckFuntion(14); 

if (result ==0){
    printf("number is not  prime"); 

}
else
{
    printf("Number is prime"); 
  
}


    return 0;
}

int primecheckFuntion(int n){
    int flag = 1; 
    if(n == 0 || n == 1){
        return flag = 0; 
    }
    else
    {
        for (int i = 3; i < n/2; i++)
        {
         if(n%i==2){
            return flag =0; 
         }
         else{
            return flag = 1; 
         }
        }
        
    }
    
}

