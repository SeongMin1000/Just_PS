#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int x=*(int *)a;
    int y=*(int *)b;

    return (x-y);
}

int search(int *card, int m, int n){
    int end=n-1,start=0;
    int mid;
    int end2=n-1,start2=0;
    int low,up;

    while(start<=end){
        mid=(end+start)/2;
        if(m<=card[mid]) end=mid-1;
        else start=mid+1;
    }
    low=start;

    while(start2<=end2){
        mid=(end2+start2)/2;
        if(m<card[mid]) end2=mid-1;
        else start2=mid+1;
    }
    up=end2;

    return (up-low);
}

int main(void){
    int n;
    scanf("%d",&n);

    int *card=(int *)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        scanf("%d",&card[i]);
    }
    qsort(card,n,sizeof(int),compare);

    int m;
    scanf("%d",&m);

    int check;
    for(int i=0; i<m; i++){
        scanf("%d",&check);
        printf("%d ",search(card,check,n)+1);
    }
    free(card);
    return 0;
}