#include <stdio.h>
int main(){
    int n,num;

    scanf("%d",&n);

    int a[n],i;
    long long int sum=0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&num);
    for(i=0;i<n;i++) {
        if(a[i]==num){
            printf("%d\n",i);
            return 0;
        }
    }
    printf("%d",-1);


    return 0;
}