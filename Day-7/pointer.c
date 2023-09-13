#include <stdio.h>
void swap(int *mem1, int *mem2)
{
    int temp = *mem1;

    *mem1 = *mem2;

    *mem2 = temp;
}
int main()
{

    int x = 100, y = 250;
    printf("-------------\n");
    printf("Before Swap\n");
    printf("x = %d\tAddress = %p\n", x, &x);
    printf("y = %d\tAddress = %p\n", y, &y);
    printf("-------------\n");

    swap(&x, &y);
    printf("-------------\n");
    printf("After Swap\n");
    printf("x = %d\tAddress = %p\n", x, &x);
    printf("y = %d\tAddress = %p\n", y, &y);
    printf("-------------\n");

    return 0;
};