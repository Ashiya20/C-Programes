#include <stdio.h>

int main()
{
    int n, prime = 0, i = 2;
    printf("enter the value of n\n");
    scanf("%d", &n);
    do
    {

        if (n % 2 == 0)
        {
            prime = 0;
            break;
        }
        i++;
    } while (i < n );
    if (prime == 1)
    {
        printf("this is not a prime number");
    }
    else
    {
        printf("this is a prime number");
    }

    return 0;
}