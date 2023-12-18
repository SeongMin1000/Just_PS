#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char arr1[1000001][21];
char arr2[500001][21];

int compare(const void* a, const void* b){
    return strcmp((char *)a,(char *)b);
}

int main(void){
    int count=0;
    int n,m;
    scanf("%d %d",&n,&m);

    for(int i=0; i<n+m; i++){
        scanf("%s",arr1[i]);
    }

    qsort(arr1,n+m,sizeof(arr1[0]),compare);
    for(int i=0; i<n+m; i++){
        if(strcmp(arr1[i],arr1[i+1])==0){
            strcpy(arr2[count++],arr1[i++]);
        }
    }

    printf("%d\n",count);
    for(int i=0; i<count; i++){
        printf("%s\n",arr2[i]);
    }
    return 0;

}
