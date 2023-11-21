#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int com(const void* arg1, const void* arg2){
    if(strlen((const char*)arg1) > strlen((const char*)arg2)) return 1;
    else if (strlen((const char*)arg1) < strlen((const char*)arg2)) return -1;
    else return strcmp((char*)arg1,(char*)arg2);
}

int main() {
    int n;
    char s[20000][51];
    scanf("%d",&n);

    for(int i=0; i<n; i++) scanf("%s",s[i]);

    qsort(s,n,sizeof(s[0]),com);

    for(int j=0; j<n; j++){
        if(strcmp(s[j],s[j+1])!=0) printf("%s\n",s[j]);
    }
    
    return 0;
}