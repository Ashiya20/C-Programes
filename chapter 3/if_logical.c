#include <stdio.h>

int main()
{
    int age;
    int vippass = 1;
    printf("enter your age \n");
    scanf("%d", &age);

    if ((age <= 70 && age >= 18) || vippass == 1)
    {
        printf("you are above 18 and below 70, you can drive \n");
    }
    else
    {
        printf("you cannot drive");
    }
    return 0;
}