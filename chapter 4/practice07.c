#include <stdio.h>

int main()
{
int sum=0 ,n;
    for (int i = 1; i<=10; i++)
    
    {
        printf("8 X %d = %d \n", i, 8 * i);
        n=8*i;
        sum+=n;
    }
    printf("the sum of 8 multiplication table is %d",sum);
   
    return 0;
}