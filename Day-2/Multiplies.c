#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n1,n2,m,i;
    scanf("%d%d",&n1,&n2);

    if(n1<=n2){
        if(n2%n1 ==0 ){
            printf("Multiples\n");
             return 0;

        }
       
    }else{

        if(n1%n2 ==0 ){
            printf("Multiples\n");
            return 0;

        }
          
        
    }
    printf("No Multiples\n");
    

    

    return 0;
}
