#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int row, col, j, i;
    scanf("%d%d\n", &row, &col);
    int a[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            a[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
};