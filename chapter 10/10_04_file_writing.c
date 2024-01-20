#include <stdio.h>

int main()
{
    FILE *fptr;
    int num = 45;
    fptr = fopen("generate.txt","w");
    fprintf(fptr,"The number is %d\n",num);
    fprintf(fptr,"Thanx for using fprintf");
    fclose(fptr);
    return 0;
}