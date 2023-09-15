#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
// 1. has return +  has parameter
int sum(int a, int b)
{
    return a + b;
}
// 2. no return +  has parameter
void showMe(char *key, int result)
{
    printf("%s %d\n", key, result);
    return;
}
// 3. has return +  no parameter
int get_a_Num()
{
    return 56;
}
// 4. no return +  no parameter
void program_End()
{
    printf("~~~~~~~~~~\n");
    printf("Program Completed\n");
}
void program_Start()
{
    printf("~~~~~~~~~~\n");
    printf("Program Start\n");
}

int main()
{
    program_Start();
    int n1, n2;
    scanf("%d%d", &n1, &n2);

    int summation = sum(n1, n2);

    showMe("sum =", summation);

    int newNumber = get_a_Num();

    showMe("Number is =", newNumber);

    program_End();

    return 0;
};