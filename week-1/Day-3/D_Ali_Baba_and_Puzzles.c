#include <stdio.h>
int main()
{
    long long int a, b, c, res;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &res);

    if (a + b - c == res)
    {
        printf("YES");
    }
    else if (a + b * c == res)
    {
        printf("YES");
    }
    else if (a - b + c == res)
    {
        printf("YES");
    }
    else if (a - b * c == res)
    {
        printf("YES");
    }
    else if (a * b - c == res)
    {
        printf("YES");
    }
    else if (a * b + c == res)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    printf("\n");

    return 0;
}