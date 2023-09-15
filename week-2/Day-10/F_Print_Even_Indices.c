#include <stdio.h>
#include <string.h>
void printEven(int *a, int n)
{
    if (n < 0)
        return;

    if ((n - 1) % 2 == 0)
    {
        printf("%d", a[n - 1]);
        if (n - 1 != 0)
        {
            printf(" ");
        }
    }
    printEven(a, n - 1);
    return;
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

    printEven(a, n);
    printf("\n");
    return 0;
};