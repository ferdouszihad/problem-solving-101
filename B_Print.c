#include <stdio.h>
#include <string.h>
void print(int n)
{
    for (int i = 1; i <= n; i++)
    {

        printf("%d", i);
        if (i != n)
            printf(" ");
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
};