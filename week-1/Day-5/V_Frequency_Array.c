#include <stdio.h>
#include <string.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int count[m + 1], a[n];

    for (int i = 0; i < m + 1; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        count[a[i]]++;
    }

    for (int i = 1; i < m + 1; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}