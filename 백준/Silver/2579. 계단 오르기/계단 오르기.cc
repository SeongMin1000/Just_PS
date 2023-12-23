#include <stdio.h>

int MAX(int a, int b){
    return (a>b ? a:b);
}

int main(void){
    int n;
    scanf("%d",&n);

    int stair[301];
    int max[301];
    for(int i=1; i<=n; i++){
        scanf("%d",&stair[i]);
    }

    max[0]=0;
    max[1]=stair[1];
    max[2]=stair[2]+stair[1];

    for(int i=3; i<=n; i++){
        max[i]=stair[i]+(MAX(max[i-2],stair[i-1]+max[i-3]));
    }

    printf("%d",max[n]);
    return 0;
}