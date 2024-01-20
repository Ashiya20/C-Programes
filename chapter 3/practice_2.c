#include <stdio.h>

int main()
{
    int math, science, hindi;
    float total;

    printf("enter your math marks \n");
    scanf("%d", &math);

    printf("enter your science marks \n");
    scanf("%d", &science);

    printf("enter your hindi marks \n");
    scanf("%d", &hindi);
    total = (math + science + hindi)/3;
if((total<40) || math<33 || science<33 || hindi<33)
{
    printf("your total percentage is %f and you are fail",total);
}
else{
    printf("your total percentage is %f and you are pass",total);
}
    return 0;
}