#include <stdio.h>
#include <string.h>
void print_to(int i, int n)
{
    if (i > n)
        return;
    print_to(i + 1, n);
    printf("%d\n", i);
}
int main()
{
    print_to(1, 100);

    return 0;
};