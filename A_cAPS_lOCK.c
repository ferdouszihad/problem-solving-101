#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int isUpperAll = 0, countUpper = 0;
    int isUpperFrom2nd = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            countUpper++;
        }
    }
    // printf("%d\n", countUpper);

    if ((countUpper == strlen(s) - 1) && (s[0] >= 'a' && s[0] <= 'z'))
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
            else
            {
                s[i] -= 32;
            }
        }
        // change Cases
    }
    else if (countUpper == strlen(s))
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
            else
            {
                s[i] -= 32;
            }
        }
        // chang Cases
    }

    printf("%s\n", s);
    return 0;
}