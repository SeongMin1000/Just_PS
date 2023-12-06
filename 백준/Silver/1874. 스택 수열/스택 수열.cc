#include <stdio.h>
#include <stdlib.h>

char pm[200000];
int stack[200000];

int main(void){
    int n;
    scanf("%d",&n);

    int *num=(int *)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
    }

    int top=-1;
    int push=1;
    int count=0;
    int idx=0;
    while(1){
        if(top==-1 || stack[top]<num[count]){
            stack[++top]=push++;
            pm[idx++]='+';
        }
        else if(stack[top]==num[count]){
            top--;
            count++;
            pm[idx++]='-';
        }
        else{
            printf("NO\n");
            return 0;
        }
        if(count==n) break;
    }
    for(int j=0; j<idx; j++){
        printf("%c\n",pm[j]);
    }
   
    free(num);
    return 0;
}
