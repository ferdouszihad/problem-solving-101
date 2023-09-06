#include <stdio.h>
int main(){
    int n;

    scanf("%d",&n);

    int a[n],i;
    long long int sum=0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) sum+=a[i];

    if(sum<0){
        printf("%lld\n",sum * -1);
    }else{
        printf("%lld\n",sum);
    }


    return 0;
}