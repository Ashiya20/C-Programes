#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses;
    srand(time(0));
    // generates a random number between 1 to 100
     number=rand()%50 +1;
    printf("the number is %d \n",number);
    return 0;
}