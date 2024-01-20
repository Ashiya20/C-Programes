#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("putcdemo.txt","w");
    putc('s',ptr);
    putc('e',ptr);
    putc('e',ptr);
    fclose(ptr);
    return 0;
}