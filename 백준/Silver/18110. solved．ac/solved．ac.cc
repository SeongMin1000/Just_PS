#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b){
    int x=*(int *)a;
    int y=*(int *)b;
    if(x>y) return 1;
    else if(x==y) return 0;
    else return -1;
}

int main(void){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0");
        return 0;
    } 
    int *sol=(int *)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        scanf("%d",&sol[i]);
    }
    qsort(sol,n,sizeof(int),compare);

    int cut=(int)round(n*0.15);
    int end=n-cut-1;
    double sum=0;
    double count=0;
    for(cut; cut<=end; cut++){
        sum+=sol[cut];
        count++;
    }
    int av=(int)round(sum/count);
    printf("%d",av);

    free(sol);
    return 0;
}
