#include <stdio.h>

int main()
{
    char st1[] = "liza";
    char st2[45];
    int i=0;
    printf("string st1 : %s \n",st1);
    while(st1[i] != '\0'){
        st2[i] = st1[i];
        i++;
    }
    st2[i]='\0';
    printf("String st2 : %s",st2);
    return 0;
}