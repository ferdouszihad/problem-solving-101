#include <stdio.h>
#include <string.h>

int sort(int *a)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int main()
{
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);
    int a[3] = {n1, n2, n3};
    sort(a);

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);

    return 0;
};
