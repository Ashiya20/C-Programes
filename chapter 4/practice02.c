#include <stdio.h>

int main()
{
    // write a program to print multiplication table of 10 in reversed order
    for (int i = 10; i; i--){
        printf("10 X %d = %d \n", i, 10 * i);
    }
    return 0;
}