#include <stdio.h>

int main()
{
    int i,j=5,space,k=0;
    for (int i = 1; i <= j; i++,k=0)
    {
        for(space=1;space<=j-i;space++){
            printf(" ");
        }
        while(k!=2*i-1){
            printf("*");
            k++;
        }
        printf("\n");
    }
    
    return 0;
}