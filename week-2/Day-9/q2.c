#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int spc = n - 1, nums = 1;

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= spc; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= nums; j++)
        {
            printf("%d", i);
        }

        printf("\n");
        spc--;
        nums += 1;
    }

    return 0;
};