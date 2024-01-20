#include <stdio.h>

int main()
{
    // int i = 34;
    // int *ptr = &i;
    // printf("The value of ptr is %u \n", ptr);
    // ptr++;
    // printf("The value of ptr is %u \n", ptr);

    char c = 'u';
    char *ptr = &c;
    printf("The value of ptr is %u \n", ptr);
    ptr++;
    ptr++;
    printf("The value of ptr is %u \n", ptr);
    return 0;
}