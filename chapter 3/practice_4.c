#include <stdio.h>

int main()
{
    int year;
    printf("enter year \n");
    scanf("%d",&year);
    if(year % 4 ==0)
    {
        printf(" is a leap year \n");
    }
    else
    {
        printf("is not a leap year \n");
    }
    return 0;
}