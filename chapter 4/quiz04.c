#include <stdio.h>

int main()
{
    // write a program to print n natural numbers in reversed order
    int n;
    scanf("%d",&n);
    for(int i=n;i;i--){
        printf("%d \n",i);
    }
    return 0;
}