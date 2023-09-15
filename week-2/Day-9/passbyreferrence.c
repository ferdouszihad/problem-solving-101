#include <stdio.h>
#include <string.h>
void func(int *arr, int n)
{
    arr[1] = 0;
}
int main()
{
    int arr[3] = {31, 12, 14};
    printf("a[%d] = %d\n", 1, arr[1]); // a[1] = 12
    func(arr, 3);
    printf("a[%d] = %d\n", 1, arr[1]); // a[1] = 0

    return 0;
};