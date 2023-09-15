#include <stdio.h>
#include <string.h>
void printTo(int n)
{
    if (n == 0)
        return;
    // printf("%d\n", n);
    printTo(n - 1);
    printf("I love Recursion\n");
    return;
}
int main()
{
    int n;
    scanf("%d", &n);
    printTo(n);
    return 0;
};