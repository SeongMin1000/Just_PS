#include <stdio.h>

int arr[2200][2200];
int count[3];

int check(int a, int b, int c){
    int start=arr[a][b];
    for(int i=a; i<a+c; i++){
        for(int j=b; j<b+c; j++){
            if(start!=arr[i][j]) return 0;
        }
    }
    return 1;
}

void divide(int a, int b, int c){
    if(check(a,b,c)){
        count[arr[a][b]]++;
    }
    else{
        int size=c/3;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                divide(size*i+a, size*j+b, size);
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int d;
            scanf("%d",&d);
            arr[i][j]=d+1;
        }
    }
    divide(0,0,n);
    for(int i=0; i<3; i++){
        printf("%d\n",count[i]);
    }
    
    return 0;
}
