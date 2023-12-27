#include <stdio.h>
#include <math.h>

int n,r,c;
int count=0;

void dc(int x, int y, int size){
    if(c==x && r==y){
        printf("%d",count);
        return;
    }
    else if (c < x + size && r < y + size && c >= x && r >= y){
        dc(x, y, size / 2);
        dc(x + size / 2, y, size / 2);
        dc(x, y + size / 2, size / 2);
        dc(x + size / 2, y + size / 2, size / 2);
    }else{ 
        count += size * size;
    }
}

int main(){
    scanf("%d %d %d",&n,&r,&c);
    
    dc(0,0,pow(2,n));
  
    return 0;
}
