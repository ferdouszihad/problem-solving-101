#include <stdio.h>
#include <string.h>
int getMinNum(int *a, int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    return min;
}
int countMin(int *a, int n, int min)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
            c++;
    }
    return c;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int min = getMinNum(a, n);
    int f = countMin(a, n, min);

    if (f % 2 == 0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }

    return 0;
};