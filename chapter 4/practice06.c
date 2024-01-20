#include <stdio.h>

int main()
{
    int i = 0, sum = 0, n;
    printf("enter the value of n \n");
    scanf("%d", &n);
    do
    {

        sum += i;

        i++;
    } while (i <= n);
    printf("the value of sum is %d \n", sum);
    return 0;
}