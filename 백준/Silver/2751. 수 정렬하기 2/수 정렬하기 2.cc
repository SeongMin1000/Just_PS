#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int c=*(int *)a;
    int d=*(int *)b;

    return c-d;
}

int arr[1000000];
int main(void){
    int n;  
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    qsort(arr,n,sizeof(int),compare);

    for(int i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}