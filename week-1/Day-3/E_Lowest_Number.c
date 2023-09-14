#include <stdio.h>
int main(){
    int n,num;

    scanf("%d",&n);

    int a[n],i;
    long long int sum=0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    int low =a[0] , pos = 0;

    for(i=1;i<n;i++) {
        if(a[i]<low){
            pos=i;
            low = a[i];
        }
       
    }

    printf("%d %d\n",low ,pos+1);



    return 0;
}