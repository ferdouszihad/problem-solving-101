#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int star = 1, space = n - 1;

    for (i = 1; i <= 2 * n; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");

        if (i > n)
        {
            star -= 2;
            space++;
        }
        else if (i == n)
        {
        }
        else
        {
            star += 2;
            space--;
        }
    }

    return 0;
};