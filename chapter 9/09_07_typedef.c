#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[10];
}emp;

void show(emp emp1){
printf("The code of employee is: %d\n",emp1.code);
printf("The salary of employee is: %.2f\n",emp1.salary);
printf("The name of employee is: %s\n",emp1.name);
}
int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 345.09;
    strcpy(ptr->name,"liza");
    show(e1);
    return 0;
}