#include <stdio.h>
int main(){
    int n,num;

    scanf("%d",&n);

    int a[n],i;
    long long int sum=0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    for(i=0;i<n;i++) {
        if(a[i]>0){
            a[i]=1;
            
        }else if(a[i]<0){
            a[i]=2;
        }
    }
    for(i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n",-1);


    return 0;
}