#include <stdio.h>

int main(void){
    int a[10];
    int n,k;
    int min=0;
    scanf("%d %d",&n,&k);

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int i=n-1;

    while(k>0){
        if(a[i]>k){
            i--;
        }
        else{
            k-=a[i];
            min++;
        }
    }
    printf("%d",min);
    return 0;

}
