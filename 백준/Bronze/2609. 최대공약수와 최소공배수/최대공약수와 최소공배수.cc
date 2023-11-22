#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d %d",&a,&b);

    int min,max;

    int sm=(a>b) ? b:a;
    int big=(a>b) ? a:b;

    for(int i=1; i<=sm; i++){
        if(sm%i==0 && big%i==0) min=i;
    }
    int j=1;
    while(1){
        max=big*j;
        if(max%sm==0) break;
        j++;
    }
    printf("%d\n",min);
    printf("%d\n",max);
    return 0;
}