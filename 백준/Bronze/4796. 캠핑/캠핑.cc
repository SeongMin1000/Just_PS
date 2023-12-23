#include <stdio.h>

int main(){
    int l,p,v;
    int count=0;
    while(1){
        int max=0;
        scanf("%d %d %d",&l,&p,&v);
        if(l==0 && p==0 && v==0) break;

        max=(v/p)*l;
        v=v%p;
        max+=v<l ? v:l;
        count++;
        printf("Case %d: %d\n",count, max);
    }

    return 0;
}
