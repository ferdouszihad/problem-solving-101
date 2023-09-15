#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, m, i, j, pd = 0, sd = 0;
    scanf("%d %d", &n, &m);
    int a[n][m];
    /////////////////////////
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    ////////////////////////
    int num;
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {

            if (a[i][j] == num)
            {
                // printf("a[%d][%d] == %d\n", i, j, num);
                printf("will not take number\n");
                return 0;
            }
        }
    }

    printf("will take number\n");

    return 0;
};