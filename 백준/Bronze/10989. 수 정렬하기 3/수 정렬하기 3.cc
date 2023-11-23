#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int num;
    int arr[10001]={0,};
    for(int i=0; i<n; i++){
        scanf("%d",&num);
        arr[num]++;
    }

    for(int j=1; j<10001; j++){
        for(int k=0; k<arr[j]; k++){
            printf("%d\n",j);
        }
    }

    
    return 0;
}