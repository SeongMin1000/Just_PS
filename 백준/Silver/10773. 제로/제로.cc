#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int num;
    int k[100001]={0};
    int j=0,sum=0;

    for(int i=0; i<n; i++){
        scanf("%d",&num);
        if(num==0){
            --j;
        }
        else{
            k[j]=num;
            j++;
            
        }
    }

    for(int i=0; i<j; i++){
        sum+=k[i];
    }
    printf("%d",sum);

    return 0;
}