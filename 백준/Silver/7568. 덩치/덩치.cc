#include <stdio.h>

int main(void){
    int n;
    int weight[51],height[51];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d %d",&weight[i],&height[i]);
    }

    for(int i=0; i<n; i++){
        int rank=1;
        for(int j=0; j<n; j++){
            if(weight[i]<weight[j] && height[i]<height[j]) rank++;
        }
        printf("%d ",rank);
    }

    return 0;
}