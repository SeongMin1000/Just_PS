#include <stdio.h>
#include <string.h>

int count=0;
int arr[10001];

void push(int put){
    arr[count]=put;
    count++;
}

void pop(){
    if(count!=0){
        count--;
        printf("%d\n",arr[count]);
        arr[count]=0;
    }
    else printf("-1\n");
}

void size(){
    printf("%d\n",count);
}

void empty(){
    if(count==0) printf("1\n");
    else printf("0\n");
}

void top(){
    if(arr[count-1]!=0) printf("%d\n",arr[count-1]);
    else printf("-1\n");
}

int main(void){
    int n;
    scanf("%d",&n);

    char stack[10];
    int put;
    for(int i=0; i<n; i++){
        scanf("%s",stack);
        if(strcmp(stack,"push")==0){
            scanf("%d",&put);
            push(put);
        }
        else if(strcmp(stack,"pop")==0) pop();
        else if(strcmp(stack,"size")==0) size();
        else if(strcmp(stack,"empty")==0) empty();
        else if(strcmp(stack,"top")==0) top();
    }
    
    return 0;
}