#include <stdio.h>
#include <stdlib.h>

int arr1[100001];
int arr2[100001];

int compare(const void *a, const void *b){
    int x=*(int*)a;
    int y=*(int*)b;
    if(x>y) return 1;
    else if(x<y) return -1;
    else return 0;
}
int main(void){
    int n;
    int m;

    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr1[i]);
    }
    qsort(arr1,n,sizeof(int),compare);

    scanf("%d",&m);
    for(int i=0; i<m; i++){
        scanf("%d",&arr2[i]);
    }

    for(int j=0; j<m; j++){
        int start=0;
        int end=n-1;
        int tf=0;

        while(start<=end){
            int mid=(start+end)/2;
            if(arr2[j]>arr1[mid]) start=mid+1;
            else if(arr2[j]<arr1[mid]) end=mid-1;
            else{
                tf=1;
                break;
            }
        }
        if(tf) printf("1\n");
        else printf("0\n");
    }
    return 0;
}