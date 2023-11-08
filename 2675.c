#include <stdio.h>
#include <string.h>

int main(void){
    int T, R;
    char S[20];
    scanf("%d",&T);
    for(T; T>0; T--){
        scanf("%d %s",&R,&S);
        for(int i=0; i<strlen(S); i++){
            for(int j=0; j<R; j++){
                printf("%c",S[i]);
            }
        }
        printf("\n");
    }

    return 0;
}