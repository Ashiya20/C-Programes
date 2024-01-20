#include <stdio.h>
float farenheit(float c);
int main()
{
    float celsisus ;
    printf("Enter the tempreture in celsisus \n");
    scanf("%f",&celsisus);
    printf("the value of this celsisus tempreture in farhrenheit is %f \n",farenheit(celsisus));
    return 0;
}
float farenheit(float c){
    float far;
    far = (c*9/5)+32;
    return far;
   
}