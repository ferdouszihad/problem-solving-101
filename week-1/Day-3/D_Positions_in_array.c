#include <stdio.h>
int main(){
    int n,num;

    scanf("%d",&n);

    int a[n],i;
    long long int sum=0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    for(i=0;i<n;i++) {
        if(a[i]<=10){
            printf("A[%d] = %d\n",i,a[i]);
            
        }
    }



    return 0;
}