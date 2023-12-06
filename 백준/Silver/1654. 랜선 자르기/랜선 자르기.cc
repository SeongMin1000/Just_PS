#include <stdio.h>
#include <stdlib.h>

int main(void){
    int k,n;
    scanf("%d %d",&k,&n);
    int *num=(int *)malloc(sizeof(int)*n);
    
    int right=0;
    for(int i=0; i<k; i++){
        scanf("%d",&num[i]);
        if(num[i]>right) right=num[i];
    }

    long long left=1,ans=0,mid;
    int count;
    
    while(left<=right){
        mid=(left+right)/2;
        count=0;
        for(int j=0; j<k; j++){
            count+=num[j]/mid;
        }
        if(count>=n){
            if(ans<mid)
                ans=mid;
            left=mid+1;
        }
        else{
            right=mid-1;
        }
        
    }
    printf("%lld",ans);
    free(num);
    return 0;
}
