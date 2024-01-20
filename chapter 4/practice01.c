#include <stdio.h>

int main()
{
    // write a program to print multiplication table of a given number n

    int n;
    printf("enter the value of n \n");
    scanf("%d",&n);
  for (int i = 0; i < 10; i++)
  {
      printf("%d X %d = %d \n",n,i+1,(i+1)*n);
  }
    return 0;
}