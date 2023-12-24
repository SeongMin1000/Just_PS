#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
    int x=*(int *)a;
    int y=*(int *)b;
    return x-y;
}

int main(){
    int n,l;
    scanf("%d %d",&n,&l);

    int arr[1001];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);

    int start=arr[0];
    int count=0;
    for(int i=1; i<n; i++){
        if(arr[i]-start>=l){
            start=arr[i];
            count++;
        }
    }

    printf("%d",count+1);
    return 0;
}
