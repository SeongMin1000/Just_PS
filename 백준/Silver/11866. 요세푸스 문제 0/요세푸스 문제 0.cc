#include <stdio.h>

int main(void){
    int n,k,idx;
    scanf("%d %d",&n,&k);

    int arr[1001];
    for(int i=0; i<n; i++){
        arr[i]=i+1;
    }

    printf("<%d",arr[k-1]);
    arr[k-1]=-1;

    for(int i=0,idx=k; i<n-1; i++){
        int count=0;
        int j=-1;
        while(count<k){
            j++;
            if(arr[(idx+j)%n]!=-1)
                count++;
        }
        idx=(idx+j)%n;
        printf(", %d",arr[idx]);
        arr[idx]=-1;
    }
    printf(">");
    return 0;
}