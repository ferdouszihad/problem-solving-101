#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n > 0)
    {
        int w, h;
        scanf("%d%d", &w, &h);
        if (w == h)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
        n--;
    }

    return 0;
};