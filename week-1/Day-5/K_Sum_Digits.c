#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int sum = 0;

    char s[n + 1];
    scanf("%s", &s);
    for (int i = 0; i < strlen(s); i++)
    {
        // printf("%d\n", s[i] - 48);
        sum += s[i] - 48;
    }
    printf("%d\n", sum);
    return 0;
}