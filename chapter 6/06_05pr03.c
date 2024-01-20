#include <stdio.h>
int TenTimes(int *a);
int main()
{
    int a = 5;
    int c;
    c= TenTimes(&a);
    printf("The ten times of a is %d \n", c);
    return 0;
}
int TenTimes(int *a)
{
    int temp;
    temp = 10 * (*a);
    return temp;
}
