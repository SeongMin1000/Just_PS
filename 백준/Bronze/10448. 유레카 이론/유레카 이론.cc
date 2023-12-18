#include <stdio.h>

int k[45];

int isTri(int tri){
    for(int j=1; j<=44; j++){
            for(int x=1; x<=44; x++){
                for(int z=1; z<=44; z++){
                    if((k[j]+k[x]+k[z]==tri)) return 1;
                }
            }
    }
    return 0;
}

int main(void){
    for(int j=0; j<45; j++){
        k[j]=(j*(j+1))/2;
    }

    int t;
    scanf("%d",&t);
    
    int arr[1001];
    for(int i=0; i<t; i++){
        int ttt=arr[i];
        scanf("%d",&ttt);
        
        printf("%d\n",isTri(ttt));
    }    
    return 0;
}
