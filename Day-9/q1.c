#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int spc = n - 1, nums = 1;

    for (i = 1; i <= 2 * n - 1; i++)
    {

        for (j = 1; j <= spc; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= nums; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        if (i < n)
        {
            spc--;
            nums += 2;
        }
        else
        {
            spc += 1;
            nums -= 2;
        }
    }

    return 0;
};