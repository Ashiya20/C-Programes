#include <stdio.h>

int main()
{
    int mul[10];
    int a;
    printf("Enter the value of a \n");
    scanf("%d",&a);
    for (int i = 0; i < 10; i++)
    {
        mul[i]=a*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d \n",a,i+1,mul[i]);
    }
    
    
    return 0;
}