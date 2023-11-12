#include <stdio.h>
#include <string.h>

char sent[1000005];

int main(void){   
    scanf("%[^\n]", sent);
    int i=1, count=0;
    if(sent[0]!=' ') count++;
    for(i;i<strlen(sent);i++){
        if(sent[i-1]==' '&& sent[i]!=' ') count++;
    }
    printf("%d",count);
    return 0;
}