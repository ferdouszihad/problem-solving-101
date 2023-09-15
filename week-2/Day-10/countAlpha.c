#include <stdio.h>
#include <string.h>
int count_Alph(char *s, int i)
{
    if (s[i] == '\0')
        return 0;
    printf("count_Alpha(%s,%d) work-sttarted\n", s, i + 1);
    int c = count_Alph(s, i + 1);
    printf("count_Alpha(%s,%d) = %d work-Done\n", s, i + 1, c);
    if (s[i] != ' ')
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
    char s[100] = "F M Zsad ";
    int total = count_Alph(s, 0);

    printf("%d\n", total);
    printf("hello\n");
    return 0;
};