#include <stdio.h>

int main()
{
    // write a program to print first n natural numbers using for loop
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        printf("%d \n", i+1);
    return 0;
}