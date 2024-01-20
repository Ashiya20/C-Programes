#include <stdio.h>
int positive_num(int array[] ,int n){
    int positivecount=0;
    for (int i = 0; i < n; i++)
    {
        if(array[i]>0){
            positivecount++;
        }
    }
    return positivecount;
}

int negative_num(int array[] ,int n){
    int negativecount=0;
    for (int i = 0; i < n; i++)
    {
        if(array[i]<0){
            negativecount++;
        }
    }
    return negativecount;
}
int main()
{
    int array[5]={2,54,-3,87,-99};
    int n=5; 
    int result=positive_num(array,n);
    printf("The number of positive elements in arrya is: %d \n",result);
    int result1=negative_num(array,n);
     printf("The number of negative elements in arrya is: %d \n",result1);
    return 0;
}