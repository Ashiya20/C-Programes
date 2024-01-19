#include <stdio.h>

int main()
{
    /*   when a constant vallue starts with 0, it is considered as octal number.
     therefore the value of var is 0*8+2=8    */
    int var = 010;
    printf("%d",var);
    return 0;
}