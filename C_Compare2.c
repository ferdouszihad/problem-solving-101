#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30], s2[30];
    scanf("%s %s", s1, s2);
    int i = 0;

    while (1)
    {
        if (s1[i] == '\0' && s2[i] == '\0')
        {
            printf("%s\n", s1);
            break;
        }
        else if (s1[i] == '\0')
        {
            printf("%s\n", s1);
            break;
        }
        else if (s2[i] == '\0')
        {
            printf("%s\n", s2);
            break;
        }

        if (s1[i] == s2[i])
        {
            i++;
        }
        else if (s1[i] < s2[i])
        {
            printf("%s\n", s1);
            break;
        }
        else if (s2[i] < s1[i])
        {
            printf("%s\n", s2);
            break;
        }
    }

    return 0;
};