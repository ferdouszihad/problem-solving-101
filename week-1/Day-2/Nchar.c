#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char c;
    int n;
    
    scanf("%c",&c);
    n=c;

    if(n>=97){
       printf("%c\n",c-32); 
    }else if(n<97){
        printf("%c\n",c+32);
    }
    

    return 0;
}
