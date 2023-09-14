#include <stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
            c++;
        }
    }
    if(c==0){
        printf("%d\n",-1);
    }


    return 0;
}