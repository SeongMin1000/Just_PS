#include <stdio.h>


int main() {
    int pal;
    while(1){
        scanf("%d",&pal);
        if(pal==0) break;
        int rev=pal,ori=0;
        while(rev!=0){
            ori=ori*10+(rev%10); 
            rev=rev/10; 
        }
        if(ori==pal) printf("yes\n");
        else printf("no\n");
    }
    
    return 0;
}