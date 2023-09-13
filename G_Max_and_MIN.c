#include <stdio.h>
#include <string.h>
int min_v(int *ar, int size);
int max_v(int *ar, int size);

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d %d\n", min_v(a, n), max_v(a, n));
    return 0;
};
int max_v(int *ar, int size)
{
    int max = ar[0];

    for (int i = 1; i < size; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    return max;
}
int min_v(int *ar, int size)
{
    int min = ar[0];

    for (int i = 1; i < size; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
    }
    return min;
}
