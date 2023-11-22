#include <stdio.h>

int main(void){
    int n;
    int ans=1;
    scanf("%d",&n);

    int max=1;
    int rep=6;
    
    while(1){
        if(n<=max) break;
        max+=rep;
        rep+=6;
        ans++;
    }
    printf("%d",ans);
    return 0;
}