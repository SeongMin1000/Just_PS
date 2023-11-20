#include <stdio.h>


int main() {
    int n,m; //세로, 가로
    scanf("%d %d",&n,&m);

    char tile[50][51];
    for(int i=0; i<n; i++){
        scanf("%s",tile[i]);
    }

    int ans=200;
    int w1, b1;

    for(int i=0; i+7<n; i++){
        for(int j=0; j+7<m; j++){

            for(int x=i; x<i+8; x++){
                for(int y=j; y<j+8; y++){
                    if((x-i+y-j)%2==0){
                        if(tile[x][y]!='W') w1++;
                    }
                    else{
                        if(tile[x][y]!='B') w1++;
                    }  
                }
            }

            for(int x=i; x<i+8; x++){
                for(int y=j; y<j+8; y++){
                    if((x-i+y-j)%2==0){
                        if(tile[x][y]!='B') b1++;
                    }
                    else{
                        if(tile[x][y]!='W') b1++;
                    }  
                }
            }

            int imp= w1<b1 ? w1:b1;
            if(imp<ans) ans=imp;
            w1=0;
            b1=0;
        }
    }

    printf("%d",ans);

    return 0;
}