#include <stdio.h>
#include <string.h>
int countVowelof(char *s, int i)
{
    // printf("i = %d  & strlen = %d\n", i, strlen(s));
    if (i == strlen(s))
        return 0;

    int c = countVowelof(s, i + 1);
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {

        return c + 1;
    }
    else
    {
        return c;
    }
}
int main()
{
    char s[201];
    gets(s);
    int c = countVowelof(s, 0);
    printf("%d\n", c);
    return 0;
};