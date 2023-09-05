#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);

    while(n>=10){
        n=n/10;
    }
   

    if(n%2==0) printf("EVEN\n",n);
    else printf("ODD\n");

    return 0;
}