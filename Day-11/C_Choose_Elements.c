#include <stdio.h>
#include <string.h>
long long int getMaxNum(long long int *a, int n)
{
    long long int max = a[0], loc = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            loc = i;
        }
    }
    a[loc] = -2147483748;
    return max;
}
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    long long int a[n], sum = 0;
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    for (int i = 0; i < k; i++)
    {
        int max = getMaxNum(a, n);
        if (max > 0)
        {
            sum += max;
        }
    }

    printf("%lld\n", sum);

    return 0;
};