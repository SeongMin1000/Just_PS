#include <stdio.h>

int main(void){
    long a,b,c;
    while(1){
        scanf("%ld %ld %ld",&a,&b,&c);
        if(a==0 && b==0 && c==0) break;

        long a1=a*a, b1=b*b, c1=c*c;

        if(a1==b1+c1 || b1==a1+c1 || c1==a1+b1) printf("right\n");
        else printf("wrong\n");
    }
    
    return 0;
}