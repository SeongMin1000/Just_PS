#include <stdio.h>

int kid[10];
int main(void){
    int sum=0;
    for(int i=0; i<9; i++){
        scanf("%d",&kid[i]);
        sum+=kid[i];
    }

    int a=0,b=0;
    for(int j=0; j<9; j++){
        for(int k=j+1; k<9; k++){
            if((kid[j]+kid[k])==(sum-100)){
                a=j;
                b=k;
                break;
            }
        }
    }

    int real[8];
    int y=0;
    for(int x=0; x<9; x++){
        if(x!=a && x!=b){
            real[y]=kid[x];
            y++;
        }
    }

    for(int i=0; i<7; i++){
        for(int j=i+1; j<7; j++){
            if(real[i]>real[j]){
                int tmp=real[i];
                real[i]=real[j];
                real[j]=tmp;
            }
        }
    }

    for(int i=0; i<7; i++){
        printf("%d\n",real[i]);
    }
    return 0;
}
