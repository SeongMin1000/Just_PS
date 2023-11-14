#include <stdio.h>

int main(void){
    int check;
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    check=(a*a)+(b*b)+(c*c)+(d*d)+(e*e);
    check%=10;
    printf("%d",check);
    return 0;
}