#include <stdio.h>
int sum(int a, int b);
int main()
{
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("%d", sum(n1, n2));

    return 0;
};
int sum(int a, int b)
{
    return a + b;
}