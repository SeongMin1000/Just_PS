#include <stdio.h>

int main(void){
    int t;
    int h,w,n;
    int ans;

    scanf("%d",&t);
    for(int i=0; i<t; i++) {
        scanf("%d %d %d", &h,&w,&n);
        if((n%h)==0) ans=(h*100)+(n/h);
        else ans=((n%h)*100)+((n/h)+1);
        printf("%d\n",ans);

    }
	return 0;
}