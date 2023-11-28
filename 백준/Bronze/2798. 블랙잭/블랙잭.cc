#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,m;
    int card[101];
    int sum=0,max=0;
    scanf("%d %d",&n,&m);

    for(int i=0; i<n; i++){
        scanf("%d",&card[i]);
    }

    for(int k=0; k<n; k++){
        for(int i=k+1; i<n; i++){
            for(int j=i+1; j<n; j++){
                sum=card[i]+card[j]+card[k];
                if(sum<=m && max<=sum) max=sum;
            }
        }
    }
    printf("%d",max);
    return 0;
}