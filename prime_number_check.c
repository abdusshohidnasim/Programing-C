#include <stdio.h>

int main(int argc, char const *argv[])

{
  int primenumber;
  printf("Inter your number check tha prime or not prime: ");

  scanf("%d", &primenumber);
  int flag = 1;

  if (primenumber == 0 || primenumber == 1)
  {
    flag = 0;
  }

  for (int i = 2; i < primenumber / 2; i++)
  {
    if (primenumber % i == 0)
    {
      flag = 0;
      break;
    }
  }
  if (flag == 0)
  {
    printf("is not printnumber");
  }
  else
  {
    printf("prime number");
  }

  return 0;
}
