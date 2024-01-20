#include <stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while(*ptr != '\0'){
        *ptr = *ptr +1;
        ptr++;
    }
}
int main()
{
    char c[] = "shadow of the tomb rider";
    encrypt(c);
    printf("Encrypt string is: %s",c);
    return 0;
}