#include <stdio.h>

int arr[65][65];
char input[65];

void divide(int a, int b, int c){
    int start=arr[a][b];
    for(int i=a; i<a+c; i++){
        for(int j=b; j<b+c; j++){
            if(start!=arr[i][j]){
                int d=c/2;
                printf("(");
                divide(a,b,d);
                divide(a,b+d,d);
                divide(a+d,b,d);
                divide(a+d,b+d,d);
                printf(")");
                return;
            }
        }
    }
    if(start==1) printf("1");
    else printf("0");
}

int main(){
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%s",input);
        for(int j=0; j<n; j++){
            arr[i][j]=input[j]-'0';
        }
    }
    divide(0,0,n);
  
    return 0;
}
