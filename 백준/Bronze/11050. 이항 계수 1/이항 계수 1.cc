#include <stdio.h>

int factorial(int a){
    if(a==1 || a==0) return 1;
    else return factorial(a-1)*a;
}
int main(void){
    int n,k;
    scanf("%d %d",&n,&k);

    int ans=factorial(n)/(factorial(n-k)*factorial(k));
    printf("%d",ans);
    
    return 0;
}