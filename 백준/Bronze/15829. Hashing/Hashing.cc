#include <stdio.h>
#include <math.h>

int main(void){
    int l;
    char alp[51];

    scanf("%d",&l);
    scanf("%s",alp);

    int sum=0;
    for(int i=0; i<l; i++){
        int hash=alp[i]-96;
        sum+=(hash)*pow(31,i);
    }

    printf("%d",sum);
    return 0;
}