#include <stdio.h>
void PrintArray(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d \n",i+1,*(ptr+i));
    }
    
}
int main()
{
    int arr[]={51, 65, 698, 84, 54, 22, 98};
    PrintArray(arr, 7);
    return 0;
}