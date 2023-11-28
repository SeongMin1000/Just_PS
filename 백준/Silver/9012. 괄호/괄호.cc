#include <stdio.h>
#include <string.h>

int main(void){
    int n;
    char ps[51];
    
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int vps=0;
        scanf("%s",ps);
        for(int j=0; j<strlen(ps); j++){
            if(ps[j]=='(') vps++;
            else vps--;

            if(vps<0) break;
        }
        if(vps==0) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}