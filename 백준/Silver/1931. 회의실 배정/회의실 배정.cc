#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
} greed;

int compare(const void* a, const void* b){
    greed A=*(greed *)a;
    greed B=*(greed *)b;
    if(A.y>B.y) return 1;
    else if(A.y==B.y){
        if(A.x>B.x) return 1;
        else return -1;
    }
    else return -1;
}

int main(){
    int n;
    scanf("%d",&n);

    greed arr[100001];
    for(int i=0; i<n; i++){
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    qsort(arr,n,sizeof(greed),compare);
    
    int count=1;
    int j=0;
    for(int i=1; i<n; i++){
        if(arr[j].y<=arr[i].x){
            j=i;
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
