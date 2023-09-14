#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int x = n, y = 0;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= y; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= x; j++)
        {
            printf("x");
        }

        printf("\n");
        x -= 2;
        y++;
    }

    return 0;
};