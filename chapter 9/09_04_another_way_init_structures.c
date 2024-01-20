#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};
int main()
{
  struct employee liza = {100, 34.23, "liza"};

  printf("Code is: %d \n",liza.code);
  printf("Salary is: %.2f \n",liza.salary);
  printf("Name is: %s \n",liza.name);  
    return 0;
}