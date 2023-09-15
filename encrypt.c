#include <stdio.h>
#include <string.h>
void encrypt(char *s, int i, int code)
{
    if (i == strlen(s))
        return;
    if (s[i] != ' ')
    {
        s[i] = ((s[i] - 97) + 2) % 26 + 97;
    }

    encrypt(s, i + 1, code);
}
int main()
{
    char s[101];
    gets(s);
    encrypt(s, 0, 2);
    puts(s);
    return 0;
};