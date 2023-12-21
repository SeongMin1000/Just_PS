#include <stdio.h>
#include <string.h>

int main(void){
    int n;
    scanf("%d",&n);

    char arr[10];
    int x;
    int a=0;
    for(int i=0; i<n; i++){
        scanf("%s",&arr);
        scanf("%d",&x);
        
        int k=1<<(x-1);

        if(strcmp(arr,"empty")==0){
            a=0;
        }
        else if(strcmp(arr,"all")==0){
            a=(1<<20)-1;
        }
        else if(strcmp(arr,"add")==0){
            a|=k;
        }
        else if(strcmp(arr,"remove")==0){
            a&=~k;
        }
        else if(strcmp(arr,"check")==0){
            if((a&k)>0) printf("1\n");
            else printf("0\n");
        }
        else if(strcmp(arr,"toggle")==0){
            a^=k;
        }
    }
    return 0;

}
