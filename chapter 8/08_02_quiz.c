#include <stdio.h>

int main()
{
    char str[] = "liza";
    char *ptr =str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}