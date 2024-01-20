#include <stdio.h>
int number(int n);
int main()
{ 
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
printf("The sum of first natural number is %d \n",number(n));
    return 0;
}
int number(int n){
   printf("caling number %d \n",n);
  if (n!= 0){
       return n+ number(n-1);
  }
  else{
      return n;
  }
} 