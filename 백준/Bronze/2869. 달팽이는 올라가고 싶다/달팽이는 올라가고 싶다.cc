#include <stdio.h>

int main(void){
    int a,b,v;
    scanf("%d %d %d",&a,&b,&v);

    int day=(v-b)/(a-b);
    if((v-b)%(a-b)!=0) day++;

    printf("%d",day);
    return 0;
}