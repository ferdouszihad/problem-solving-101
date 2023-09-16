#include <stdio.h>
#include <string.h>
int findMax(int *a, int n, int i)
{
    if (n == i)
        return a[n - 1];

    int max = findMax(a, n, i + 1);
    if (a[i] > max)
    {
        return a[i];
    }
    else
    {
        return max;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = findMax(a, n, 0);
    printf("%d\n", max);
    return 0;
};