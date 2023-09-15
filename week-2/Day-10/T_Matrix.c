#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, i, j, pd = 0, sd = 0;
    scanf("%d", &n);
    int a[n][n];
    /////////////////////////
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    ////////////////////////
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i == j)
                pd += a[i][j];
    ////////////////////////
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i + j == n - 1)
                sd += a[i][j];
    ////////////////////////

    printf("%d\n", abs(pd - sd));

    return 0;
};