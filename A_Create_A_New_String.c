#include <stdio.h>
#include <string.h>
int main()
{
    char s1[1001], s2[10001];
    gets(s1);
    gets(s2);

    int lst1 = 0, lst2 = 0, i;

    for (i = 0; s1[i] != '\0'; i++)
    {
        lst1++;
    }

    for (i = 0; s2[i] != '\0'; i++)
    {
        lst2++;
    }

    printf("%d %d\n", lst1, lst2);

    printf("%s %s\n", s1, s2);

    return 0;
};