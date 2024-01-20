#include <stdio.h>

int main()
{
    // write a program to print natural numbers from 1to20 when initial loop
    //  conter i is initialize to 0
    int i = 0;
    // scanf("%d",&i);
    // while(i<=20 && i>=10){
    //     printf(" the value of i is: %d \n",i);
    // i++;                 OR 
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf(" the value of i is: %d \n", i);
        }
        i++;
    }
    return 0;
}