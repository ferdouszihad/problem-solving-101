#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30], s2[30];
    scanf("%s %s", s1, s2);
    int i = 0;

    if (strlen(s1) < strlen(s2))
    {
        printf("%s\n", s1);
    }
    else if (strlen(s2) < strlen(s1))
    {
        printf("%s\n", s2);
    }
    else
    {
        for (int i = 0; i < strlen(s1); i++)
        {
            if (s1[i] == s2[i])
            {
                continue;
            }
            else if (s1[i] < s2[i])
            {
                printf("%s\n", s1);
                return 0;
            }
            else
            {
                printf("%s\n", s2);
                return 0;
            }
        }
        printf("%s\n", s1);
    }

    return 0;
};