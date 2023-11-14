#include <stdio.h>

int main(void){
    char *ans;
    int cde[8];

    for(int i=0; i<8; i++){
        scanf("%d",&cde[i]);
    }

    for(int j=1;j<8; j++){
        if(cde[j-1]+1==cde[j]) ans="ascending";
        else if(cde[j-1]-1==cde[j]) ans="descending";
        else {
            ans="mixed";
            break;
        }
    }
    printf("%s",ans);
	return 0;
}