#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    scanf("%s", s);
    int i, sum = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        sum += s[i] - 48;
    }
    printf("%d\n", sum);

    return 0;
};