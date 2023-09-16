#include <stdio.h>
#include <string.h>
int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6}, temp;
    for (int i = 0; i < 6 / 2; i++)
    {
        temp = a[i];
        a[i] = a[i];
        a[i] = temp;
    }
    return 0;
};