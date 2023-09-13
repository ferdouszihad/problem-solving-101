#include <stdio.h>
int minLocation(int x[], int n, int s)
{
    int min = x[s], minLoc = s;
    for (int i = s; i < n; i++)
    {
        if (x[i] < min)
        {
            minLoc = i;
            min = x[i];
        }
    }
    return minLoc;
}
int main()
{
    int n, t, j;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        // printf("swap(%d , %d)\n", i, minLocation(a, n, i));
        t = a[minLocation(a, n, i)];
        a[minLocation(a, n, i)] = a[i];
        a[i] = t;
    }
    for (j = 0; j < n; j++)
        printf("%d ", a[j]);

    printf("\n");

    return 0;
};