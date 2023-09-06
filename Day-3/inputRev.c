#include <stdio.h>
int main()
{
    int n,i ,num,count =0,a[10],j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);   
    }


    for(i=0;i<n;i++){
        
        num = arr[i];
        if(num == 0){
            printf("0\n");
            continue;
        }

       while(num>0){
        printf("%d ",num%10);
        num/=10;

       }
        printf("\n");
       
    }


    return 0;
}