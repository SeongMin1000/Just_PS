#include <stdio.h>

int main(void){
    int m,n;
    scanf("%d %d",&m,&n);
    int num[1000001]={0,};
    num[0]=1;
    num[1]=1;
    for(int i=2; i<=n; i++){
        for(int j=2; i*j<=n; j++)
            num[i*j]=1;
    }

    for(m; m<=n; m++){
        if(num[m]==0) printf("%d\n",m);
    }
    return 0;
}
