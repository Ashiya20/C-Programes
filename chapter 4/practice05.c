#include <stdio.h>

int main()
{
    // write a program to sum first ten natural numbers using while loop

    int i =0, sum = 0, n;
    printf(" enter the value of n\n");
    scanf("%d", &n);
    // for (i = 0; i <= n; i++)
    // {
    //     sum += i;
    // }
    while(i<=n){
        sum +=i;
        i++;
    }
    printf("the value of sum is %d\n", sum);

    return 0;
}