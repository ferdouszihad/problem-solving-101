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

        for(num;num>0;num/=10){
            a[count] = num%10;
            count++;
        }
        while(count>0){
            printf("%d ",a[count-1]);
            count--;

        }
        printf("\n");
       
    }


    return 0;
}