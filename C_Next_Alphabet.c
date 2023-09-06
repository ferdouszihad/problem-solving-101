#include <stdio.h>
int main(){
    char ch;
    int next;
    scanf("%c",&ch);
    next = ch -97;

    printf("%c",((next+1) %26) +97 );
    
    return 0;
}