#include <stdio.h>
#include <math.h>

int main(void){
    int l;
    char alp[51];

    scanf("%d",&l);
    scanf("%s",alp);

    long long sum=0;
    long long r=1;
    long long n=1234567891;
    for(int i=0; i<l; i++){
        sum=(sum+(alp[i]-96)*r)%n;
        r=(r*31)%n;
    }

    printf("%lld",sum);
    return 0;
}