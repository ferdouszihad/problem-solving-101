#include <stdio.h>
#include <string.h>
int squareOf(int n)
{
    n = n * n;
    printf("Address\t value\n");
    printf("%p\t %d\n", &n, n);

    // Address value
    // 0061FF1C 10

    return n;
}
int main()
{

    int n = 10;
    printf("Address\t value\n");
    printf("%p\t %d\n", &n, n);

    // Address value
    // 0061FF00 100

    squareOf(n);

    return 0;
};