#include <stdio.h>

int main()
{
    int a=6;
    int *b=&a;
    printf("The address of variable a is %u \n",&a);
    printf("The value of variable a is %d \n",*b);
    return 0;
}