#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,start=1;
    scanf("%d",&n);

    int *arr;
    arr=(int *)malloc(sizeof(int)*1000000);

    if(n==1) printf("1");
    for(int i=1; i<=n; i++) arr[i]=i;

    while(start!=n){
        arr[start]=0;
        start++;
        if(start==n){
            printf("%d",arr[start]);
            break;
        }
        n++;
        arr[n]=arr[start];
        arr[start]=0;
        start++;
    }

    free(arr);
    return 0;
}