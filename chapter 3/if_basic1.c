#include <stdio.h>

int main()
{
    int a, b;
    printf("enter a number \n");
    scanf("%d", &a);
    if (a > 18)
    {
        printf(" you can drive \n", a);
    }
    else
    {
        printf(" you cant drive it \n", a);
    }
    return 0;
}