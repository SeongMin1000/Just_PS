#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void){
    int n,m,b;
    int min=256,max=0;
    scanf("%d %d %d",&n,&m,&b);
    int **arr=(int **)malloc(sizeof(int *)*n);
    for(int i=0; i<n; i++){
        arr[i]=(int *)malloc(sizeof(int)*m);
    }

    for(int j=0; j<n; j++){
        for(int k=0; k<m; k++){
            scanf(" %d",&arr[j][k]);
            if(arr[j][k]>max) max=arr[j][k];
            else if(arr[j][k]<min) min=arr[j][k];
        }
    }

    int time, mat=INT_MAX, height;
    for(int x=max; x>=min; x--){
        int inven=b;
        time=0;
        for(int y=0; y<n; y++){
            for(int z=0; z<m; z++){
                int diff=arr[y][z]-x;
                if(diff<0){
                    time-=diff;
                    inven+=diff;
                }
                else if(diff>0){
                    time+=diff*2;
                    inven+=diff;
                }
            }
        }
        if(inven>=0){
            if(time<mat){
                mat=time;
                height=x;
            }
        }
    }

    printf("%d %d",mat,height);

    for(int i=0; i<n; i++){
        free(arr[i]);
    }
    free(arr);
    return 0;
}
