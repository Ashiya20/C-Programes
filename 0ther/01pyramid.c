#include <stdio.h>

int main()
{
    int a,b;
    for(a=5;a;a--){
        for(b=1;b<=a;b++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}