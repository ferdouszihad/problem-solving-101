#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int space = n - 1, star = 1;
    for (i = 1; i <= n * 2 - 1; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= star; j++)
        {
            printf("x");
        }
        printf("\n");

        if (i < n)
        {
            space--;
            star += 2;
        }
        else
        {

            space++;
            star -= 2;
        }
    }

    return 0;
};