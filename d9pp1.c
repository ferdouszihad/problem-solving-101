#include <stdio.h>
#include <string.h>
int my_abs(int n)
{
    if (n > 0)
        return n;
    else
        return n * -1;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", my_abs(n));

    return 0;
};