#include <stdio.h>
#include <string.h>
long long int factorialOf(int n)
{

    if (n == 1)
        return 1;
    long long int sum = factorialOf(n - 1);
    return sum * n;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int sum;

    sum = factorialOf(n);
    printf("%lld\n", sum);
    return 0;
};