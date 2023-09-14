#include <stdio.h>
#include <string.h>
int print(int *ar, int n, int i)
{
    if (i == n)
        return 0;
    int sum = print(ar, n, i + 1);
    return sum + ar[i];
}
int main()
{
    int a[4] = {11, 2, 3, 8};
    int sum = print(a, 4, 0);
    printf("%d\n", sum);
    return 0;
};