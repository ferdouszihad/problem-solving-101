#include <stdio.h>
#include <string.h>
long long int sumOfArray(long long int *a, int n, int i)
{
    if (n == i)
        return 0;
    long long int sum = sumOfArray(a, n, i + 1);
    return sum + a[i];
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long int sum = sumOfArray(a, n, 0);
    printf("%lld\n", sum);
    return 0;
};