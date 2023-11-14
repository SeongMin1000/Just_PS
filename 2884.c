#include <stdio.h>

int main(void){
    int h,m;
    int al;
    scanf("%d %d", &h, &m);

    al=(h*60)+m-45;
    if(al<0){
        h=23;
        m+=15;
    } 
    else{
        h=al/60;
        m=al%60;
    }
    printf("%d %d",h,m);
    return 0;
}