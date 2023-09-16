#include <stdio.h>
#include <string.h>
int main()
{
    int k, n;
    scanf("%d %d", &k, &n);

    float x = (float)(100 * n) / (100 - k);
    printf("%.2f\n", x);
    return 0;
};