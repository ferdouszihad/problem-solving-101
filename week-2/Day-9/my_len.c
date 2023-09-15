#include <stdio.h>
#include <string.h>
int my_len(char *s)
{
    int c = 0;

    while (s[c] != '\0')
    {
        c++;
    }
    return c;
}
int main()
{
    char s[10001];
    scanf("%s", s);
    printf("%d\n", my_len(s));
    return 0;
};