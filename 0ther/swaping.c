#include <stdio.h>

int main()
{
    int a,b, c;
    a=10;
    b=20;
printf("value of a is %d \n",a);
printf("value of b is %d \n",b);
c=a;
a=b;
b=c;
printf("after swaping a is %d \n",a);
printf("after swaping b is %d \n",b);

    return 0;
}