#include <stdio.h>
// incomplite program...............
int main()
{
    int a[]={43,25,3};
    int *ptr=&a;
    int **ptr_ptr=ptr;
    printf("The value of ptr is %u \n",ptr);
    ptr++;
    printf("The value of ptr is %u \n",ptr);
    ptr--;
    printf("The vallue of ptr is %u \n",ptr);



  printf("The subtraction of one pointer to another %u \n",ptr);

    return 0;
}