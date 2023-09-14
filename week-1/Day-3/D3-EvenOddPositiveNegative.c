#include <stdio.h>
int main()
{
    int n,i,even=0,odd=0,pos=0,neg=0;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

        if(arr[i]%2==0) even++;
        if(arr[i]%2==1 ||arr[i]%2==-1 ) odd++;
        if(arr[i]>0) pos++;
        if(arr[i]<0) neg++;
    }


    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);

    






    return 0;
}