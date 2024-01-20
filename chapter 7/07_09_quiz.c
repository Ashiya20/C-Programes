#include <stdio.h>
int display(int number_1, int number_2, int marks[number_1][number_2])
{

    for (int i = 0; i < number_1; i++)
    {
        for (int j = 0; j < number_2; j++)
        {
            printf(" %d  %d  %d \n", i + 1, j + 1, marks[i][j]);
        }
    }
}
int main()
{
    int a, b;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    int marks[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the marks of student %d in subject %d:\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    display(a, b, marks);
    return 0;
}