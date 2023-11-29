#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int ans=0;
    
    while(1){
        if(n%5==0){
            ans+=n/5;
            break;
        }
        n-=3;
        ans++;
        if(n<=0) break;
    }

    if(n<0) printf("-1\n");
    else printf("%d\n",ans);

    return 0;
}