#include <stdio.h>
#include <string.h>
int main()
{

    char s1[101], s2[101], t;

    gets(s1);
    gets(s2);

    printf("%d %d\n", strlen(s1), strlen(s2));
    printf("%s%s\n", s1, s2);

    t = s1[0];

    s1[0] = s2[0];

    s2[0] = t;

    printf("%s %s\n", s1, s2);

    return 0;
};