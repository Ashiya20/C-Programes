#include <stdio.h>
struct complex{
    float real;
    float img;
};
int main()
{
    struct complex a, b, c;
    printf("Enter the value of a and b where a + ib is the first complex number\n");
    scanf("%f%f",&a.real,&a.img);
    printf("Enter c and d wher c + id is the scecond complex number \n");
    scanf("%f%f",&b.real, &b.img);

    c.real = a.real + b.real;
    c.img = a.img + b.img;

    printf("Sum of the complex number is: (%f) + (%fi)\n",c.real,c.img);
    return 0;
}