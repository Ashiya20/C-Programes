#include <stdio.h>
// function prototype

void display();

int main()
{
 int a;
 printf("intializing display function \n");
//  function call

 display();
 printf("display finished its work \n");   
    return 0;
}
// function definition
void display(){
    printf("this is display \n");
}