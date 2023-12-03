#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}xy;

int compare(const void *a, const void *b){
    xy c=*(xy *)a;
    xy d=*(xy *)b;
    if(c.x>d.x) return 1;
    else if(c.x==d.x){
        if(c.y>d.y) return 1;
        else return -1;
    }
    else return -1;
}

int main(void){
    int n;
    scanf("%d",&n);

    xy arr[100001];
    for(int i=0; i<n; i++){
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    qsort(arr,n,sizeof(xy),compare);

    for(int i=0; i<n; i++){
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
    return 0;
}