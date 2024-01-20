#include <stdio.h>

int main()
{
    int score;
    printf("enter score (0-100) \n");
    scanf("%d", &score);
    switch (score / 10)
    {

    case 10:
    case 9:
        printf("grade: A \n");
        break;
    case 8:
        printf("grade: B \n");
        break;
    case 7:
        printf("grade: C \n");
        break;
    case 6:
        printf("grade: D \n");
        break;

    default:
        printf("grade: f \n");
        break;
    }
    return 0;
}