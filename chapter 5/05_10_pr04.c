#include <stdio.h>
int fibo(int num);
int main()
{
    int num,result;
    printf("Enter the number in fibonacci series \n");
    scanf("%d", &num);
    if (num < 0)

    {
        printf("fibonacci of negative number is not possible \n");
    }
    else
    {
        result=fibo(num);
        printf("The %d number in fibonacci series is %d \n", num, result);
    }

    return 0;
}
int fibo(int num)
{
    // printf("caling fibonacci series %d \n",num);
    if(num==0){
        return 0;
    }
  else  if(num==1 || num==2){
        return 1;
    }
    else
    {
        return (fibo(num - 1) + fibo(num - 2));
    }
}