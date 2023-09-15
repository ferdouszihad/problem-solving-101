#include <stdio.h>
#include <string.h>
void printTo(int i, int n)
{
    if (i > n)
        return;
    printf("%d\n", i);
    printTo(i + 1, n);

    return;
}
int main()
{
    int n;
    scanf("%d", &n);
    printTo(1, n);
    return 0;
};