#include <stdio.h>
#include <string.h>

int main(void){
    char arr[101];
    char arr2[101];
    while(1){
        fgets(arr,102,stdin);
        if(arr[0]=='.') break;
        int n=0;
        for(int i=0; arr[i]!='.'; i++){
            if(arr[i]=='(' || arr[i]=='[') arr2[n++]=arr[i];
            else if(arr[i]==')'){
                if(arr2[n-1]=='(' && n>0) n--;
                else{
                    n=-1;
                    break;
                }
            }
            else if(arr[i]==']'){
                if(arr2[n-1]=='[' && n>0) n--;
                else{
                    n=-1;
                    break;
                }
            }
        }
        if(n==0) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}