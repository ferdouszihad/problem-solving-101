#include <stdio.h>
#include <string.h>
void printDigitOf(int num)
{
    if (num <= 0)
        return;
    int x = num % 10;
    printDigitOf(num / 10);
    printf("%d ", x);
}
int main()
{
    int n;
    scanf("%d", &n);
    int num;
    while (n > 0)
    {

        scanf("%d", &num);
        if (num == 0)
        {
            printf("0");
        }
        printDigitOf(num);

        printf("\n");

        n--;
    }

    return 0;
};