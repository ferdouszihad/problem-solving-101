#include <stdio.h>
int main()
{

    int pass;

    while(scanf("%d",&pass)!=EOF){
        if(pass != 1999){
            printf("Wrong\n");
        }else{
            printf("Correct\n");
            return 0;

        }
    }


    return 0;
}