#include <stdio.h>
#include <string.h>

int main()
{
char str[50];
char c;
int i=0;
printf("Enter the string : \n");
scanf("%s",str);
fflush(stdin);
printf("Enter the character to find: \n");
scanf("%c",&c);

while(i < strlen(str) && str[i]!=c){
i++;}
if(i<strlen(str)){
    printf("Character found,position: %d\n",i);
}
else{
    printf("Character not found\n");
}

    return 0;
}