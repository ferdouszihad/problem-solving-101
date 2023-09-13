#include <stdio.h>
#include <string.h>
int count_odd(int *a, int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
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
    {
        scanf("%d", &a[i]);
    }
    printf("%d\n", count_odd(a, n));
    return 0;
};