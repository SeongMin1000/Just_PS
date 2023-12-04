#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b){
    int x=*(int *)a;
    int y=*(int *)b;

    return (x-y);
}

int main(void){
    int n;
    scanf("%d",&n);
    int *num=(int *)malloc(sizeof(int)*n);
    int count[8001]={0,};
    int av,mid,lot,ran;
    double sum=0;

    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    qsort(num,n,sizeof(int),compare);

    av=(int)round(sum/n);
    printf("%d\n",av);

    mid=n/2;
    printf("%d\n",num[mid]);

    int max=0;
    int cnt=1;
    for(int j=0; j<n; j++){
        count[num[j]+4000]++;
        if(count[num[j]+4000]>max){
            max=count[num[j]+4000];
        }
    }
    for(int k=0; k<8001; k++){
        if(count[k]==max){
            if(cnt==1){
                lot=k-4000;
                cnt++;
            }
            else{
                lot=k-4000;
                break;
            }
        }
    }
    printf("%d\n",lot);

    ran=num[n-1]-num[0];
    printf("%d",ran);

    free(num);
    return 0;
}
