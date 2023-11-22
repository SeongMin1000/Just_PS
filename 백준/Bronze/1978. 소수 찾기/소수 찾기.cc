#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int num;
    int count=0;
    for(int i=0; i<n; i++){      
        scanf("%d",&num);
        int pri=0;
        for(int j=2; j<=num; j++){
            if(num%j==0) pri++;
        }
        if(pri==1) count++;
    }
    printf("%d",count);
    return 0;
}