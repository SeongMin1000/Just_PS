#include <stdio.h>

int divide(int a, int b, int c){
    if(b>1){
        long long result=divide(a,b/2,c);
        if(b%2==0){
            return (result*result)%c;
        }
        else{
            return ((result*result)%c*a)%c;
        }
    }
    else return a;
}

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int ans=divide(a%c,b,c);

    printf("%d",ans);
    return 0;
}
