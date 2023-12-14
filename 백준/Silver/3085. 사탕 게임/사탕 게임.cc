#include <stdio.h>

char candy[51][51];
int max=1;
int n;
void garo(){
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=0; j<n; j++){
            if(candy[i][j]==candy[i][j+1]) count++;
            else{
                max = max<count ? count:max;
                count=1;
            }  
        }
    }
}

void sero(){
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=0; j<n; j++){
            if(candy[j][i]==candy[j+1][i]) count++;
            else{
                max = max<count ? count:max;
                count=1;
            } 
        }
    }
}

int main(void){
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%s",&candy[i]);
    }

    for(int j=0; j<n; j++){
        for(int k=0; k<n-1; k++){
            char tmp=candy[j][k];
            candy[j][k]=candy[j][k+1];
            candy[j][k+1]=tmp;

            garo();
            sero();

            char tmp2=candy[j][k];
            candy[j][k]=candy[j][k+1];
            candy[j][k+1]=tmp2;
        }
    }

    for(int j=0; j<n; j++){
        for(int k=0; k<n-1; k++){
            char tmp=candy[j][k];
            candy[j][k]=candy[j+1][k];
            candy[j+1][k]=tmp;

            garo();
            sero();
            
            char tmp2=candy[j][k];
            candy[j][k]=candy[j+1][k];
            candy[j+1][k]=tmp2;
        }
    }

    printf("%d",max);
    return 0;

}
