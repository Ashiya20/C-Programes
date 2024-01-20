#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp){
    printf("The Code of employee is: %d\n",emp.code);
    printf("The Salary of employee is: %.2f\n",emp.salary);
    printf("The Name of employee is: %s\n",emp.name);
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 34.45;
    strcpy(ptr->name,"liza");
    show (e1);
    return 0;
}