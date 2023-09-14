#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char n;
    scanf("%c",&n);

    if(n>=48 && n<=57){
        printf("IS DIGIT\n");

    }else if( n>=65 && n<=90){
        
        printf("ALPHA\nIS CAPITAL\n");
    }else if( n>=97 && n<=122){

        
       printf("ALPHA\nIS SMALL\n"); 
    }

     

    return 0;
}