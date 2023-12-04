#include <stdio.h>
#include <stdlib.h>

int main(void){
    int q[101];
    int k,n,m;
    scanf("%d",&k);

    for(int i=0; i<k; i++){
        int ans=1;
        int start=0;
        scanf("%d %d",&n,&m);

        for(int j=0; j<n; j++){
            scanf("%d",&q[j]);
        }

        while(1){
            int max=0;
            for(int l=0; l<n; l++){
                if(max<q[l]) max=q[l];        
            }

            while(q[start]!=max){
                start=(start+1)%n;
            }
            if(start==m) break;

            ans++;
            q[start]=0;
        }
        printf("%d\n",ans);
    }
    return 0;
}
