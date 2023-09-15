#include <stdio.h>
#include <string.h>
void printTo(int i, int n)
{
    if (i > n)
        return;
    printTo(i + 1, n);
    printf("%d", i);
    if (i != 1)
    {
        printf(" ");
    }
    return;
}
int main()
{
    int n;
    scanf("%d", &n);
    printTo(1, n);
    printf("\n");
    return 0;
};