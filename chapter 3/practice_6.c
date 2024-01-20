#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("enter your 1st number \n");
    scanf("%d", &num1);
    printf("enter your 2nd number \n");
    scanf("%d", &num2);
    printf("enter your 3rd number \n");
    scanf("%d", &num3);
    printf("enter your 4th number \n");
    scanf("%d", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf(" the greatest of four number is %d \n", num1);
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf(" the gratest of four number is %d \n", num2);
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4)
    {
        printf(" the greatest of four number is %d \n", num3);
    }
    else if (num4 > num1 && num4 > num2 && num4 > num3)
    {
        printf(" the greatest number of four is %d \n", num4);
    }
    return 0;
}