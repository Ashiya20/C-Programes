// a program to calculate factorial using recursion

#include <stdio.h>
int factorial(int x);
int main()
{
 int a=3;
 printf("The value of factorial %d is %d \n",a, factorial(a));   
    return 0;
}
int factorial(int x){
    // printf("caling factorial %d \n",x);
    if(x==1 || x==0){
        return 1;
    }
    // formula of factorial is factorial(n) = factorial(n-1)xn
    else{
        return x*factorial(x-1);
    }
}