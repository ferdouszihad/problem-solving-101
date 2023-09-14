#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000001];
    int count[26];
    for (int i = 0; i < 26; i++)
    {
        count[i] = 0;
    }

    int i = 0;
    while (1)
    {
        scanf("%c", &s[i]);
        if (s[i] == '\0')
        {
            break;
        }
        count[s[i] - 97]++;
        i++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c : %d\n", i + 97, count[i]);
        }
    }

    return 0;
}