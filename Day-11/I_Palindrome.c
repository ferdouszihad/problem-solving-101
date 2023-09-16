#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);

    int i = 0, j = strlen(s) - 1, flag = 1;

    for (i = 0; i < strlen(s) / 2; i++)
    {
        // printf("checking %c & %c\n", s[i], s[j]);
        if (s[i] != s[j])
        {
            flag = 0;
            break;
        }
        j--;
    }

    if (flag == 1)
        printf("YES\n");
    else
    {
        printf("NO\n");
    }

    return 0;
};