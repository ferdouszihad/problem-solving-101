#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0], maxLoc = 0;

    for (i = 1; i < n; i++)
    {
        if (max > a[i])
        {
            max = a[i];
            maxLoc = i;
        }
    }

    int min = a[0], minLoc = 0;

    for (i = 1; i < n; i++)
    {
        if (min < a[i])
        {
            min = a[i];
            minLoc = i;
        }
    }

    printf("%d %d\n", max, min);

    a[minLoc] = max;
    a[maxLoc] = min;

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
};