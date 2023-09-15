#include <stdio.h>
#include <string.h>
int is_palindrome(char *s)
{
    int j = strlen(s) - 1;
    for (int i = 0; i < strlen(s) / 2; i++)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
        j--;
    }
    return 1;
}
int main()
{
    char s[20];
    scanf("%s", s);

    if (is_palindrome(s) == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
};