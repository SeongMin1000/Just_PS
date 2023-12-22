#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int x=*(int *)a;
    int y=*(int *)b;

    return(x-y);
}

int main(void){
    int n;
    scanf("%d",&n);

    int k[1001];
    for(int i=0; i<n; i++){
        scanf("%d",&k[i]);
    }

    qsort(k, n, sizeof(int), compare);

    int sum=0;
    for(int i=n-1; i>=0; i--){
        for(int j=i; j>=0; j--){
            sum+=k[j];
        }
    }

    printf("%d", sum);
    return 0;
}
