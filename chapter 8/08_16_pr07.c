#include <stdio.h>
void decrypt(char *c){
    char *ptr = c;
    while(*ptr != '\0'){
        *ptr = *ptr -1;
        ptr++;
    }
}
int main()
{
    char c[] = "tibepx!pg!uif!upnc!sjefs";
    decrypt(c);
    printf("Decrypt string is: %s",c);
    return 0;
}