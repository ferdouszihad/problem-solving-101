#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum;
    scanf("%d", &sum);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == sum)
            {
                printf("%d + %d = %d", a[i], a[j], a[i] + a[j]);
                return 0;
            }
        }
    }

    printf("Not match!!!\n");
    return 0;
}