#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int copy=n;
    int sum;
    for(int i=1; i<=n; i++){
        sum=i;
        int a=i;
        while(a!=0){
            sum+=a%10;
            a/=10;
        }
        if(sum==n){
            printf("%d",i);
            break;
        }
        if(i==n){
            printf("0");
            break;
        }
    }
    return 0;
}