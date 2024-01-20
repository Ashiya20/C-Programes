#include <stdio.h>

int main()
{
    // 97-122 = a-z ascii values
    char ch;
    printf("enter the character \n");
    scanf("%c", &ch);
    if (ch <= 122 && ch >= 97)
    {
        printf("it is lower case");
    }
    else
    {
        printf(" it is not lower case");
    }
    return 0;
}