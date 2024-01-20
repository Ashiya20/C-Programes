#include <stdio.h>
int main()
{
int table[3][10];
int n,m,p;
printf("Enter the number\n");
scanf("%d",&n);
printf("Enter the number\n");
scanf("%d",&m);
printf("Enter the number \n");
scanf("%d",&p);
  printf("The multiplication table of %d is:\n",n);
for (int i = 0; i < 10; i++)
{
    table[0][i]=n*(i+1);
}
for (int i = 0; i < 10; i++)
{
    printf("%d X %d = %d\n",n,i+1,table[0][i]);
}
 printf("**********************************************************\n\n");
 printf("The multiplication table of %d is\n",m);
for (int i = 0; i < 10; i++)
{
    table[0][i]=m*(i+1);

}
for (int i = 0; i < 10; i++)
{
    printf("%d X %d = %d\n",m,i+1,table[0][i]);
}
printf("**********************************************************\n\n");
 printf("The multiplication table of %d is\n",p);
for (int i = 0; i < 10; i++)
{
    table[0][i]=p*(i+1);
}
for (int i = 0; i < 10; i++)
{
    printf("%d X %d = %d\n",p,i+1,table[0][i]);
}
printf("**********************************************************\n\n");
    return 0;
}