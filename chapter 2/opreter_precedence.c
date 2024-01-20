#include <stdio.h>

int main()
{
    // Q2 

// printf("the value of 3.0 / 8 - 2 will return %f /n",30.0 / 8 - 2);

// Q3 write a program to check whether a number is divisible by 97 or not

// int num;
// printf("enter the number \n");
// scanf("%d",& num);
// printf("didivisiblity test returns : %d\n",num %97);

// Q4 explain step by step evalution of 3*x/y-z+k where x=2 y=3 z=3 k=1

int x=2, y=3, z=3, k=1;
int result = 3 * x / y - z + k;
// 3*2/3-3+1
// 6/3-3+1
// 2-3+1
// 0
printf("the result will be %d \n",result);
return 0;
}