#include <stdio.h>
#include <string.h>

int count=0;
int arr[10001];
int q=0;
int end=0;
void push(int put){
    arr[end++]=put;
    count++;
}

void pop(){
    if(count!=0){
        printf("%d\n",arr[q]);
        arr[q]=0;
        q++;
        count--;
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

void front(){
    if(count!=0) printf("%d\n",arr[q]);
    else printf("-1\n");
}

void back(){
    if(count!=0) printf("%d\n",arr[end-1]);
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
        else if(strcmp(stack,"front")==0) front();
        else if(strcmp(stack,"back")==0) back();
    }
    
    return 0;
}