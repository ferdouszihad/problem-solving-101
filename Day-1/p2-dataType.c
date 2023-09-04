#include <stdio.h>
int main(){
    int n1 , n2;
    scanf("%d %d",&n1,&n2);
    int sum = n1+n2;
    int sub = n1-n2;
    int mul = n1*n2;
    double div = (double) n1/ (double) n2;

    printf("%d + %d = %d\n",n1,n2,sum);
    printf("%d - %d = %d\n",n1,n2,sub);
    printf("%d * %d = %d\n",n1,n2,mul);
    printf("%d / %d = %.2lf\n",n1,n2,div);

    return 0;
}