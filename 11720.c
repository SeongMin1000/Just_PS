#include <stdio.h>

int main(void){
    int n;
    char abc[101];
    int sum=0;

    scanf("%d",&n);
    scanf("%s",&abc);
    for(int i=0; i<n; i++){
        sum+=abc[i]-'0';
    }
    printf("%d",sum);
    return 0;
}