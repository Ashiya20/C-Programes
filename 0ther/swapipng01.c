#include <stdio.h>

int main()
{
    int a,b;
    a=20;
    b=30;
    // printf("before swaping a is %d \n",a);
    // printf("before swaping b is %d \n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping a is %d \n",a);
    printf("after swaping b is %d \n",b);
    return 0;
}