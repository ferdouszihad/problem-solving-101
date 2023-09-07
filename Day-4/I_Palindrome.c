#include <stdio.h>
#include <string.h>
int main()
{

    char s[100001];

    gets(s);
    int i, j;

    for (i = 0, j = strlen(s) - 1; i < strlen(s) / 2; i++, j--)
    {
        if (s[i] != s[j])
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
};