#include <stdio.h>
#include <string.h>

int count=0;
int arr[10001];

void push_front(int put){
    for(int i=count; i>=0; i--){
        arr[i+1]=arr[i];
    }
    arr[0]=put;
    count++;
}

void push_back(int put){
    arr[count++]=put;  
}

void pop_front(){
    if(count==0 && arr[0]==0) printf("-1\n");
    else{
        printf("%d\n",arr[0]);
        for(int i=0; i<count; i++){
            arr[i]=arr[i+1];
        }
        arr[count]=0;
        count--;
    }
}

void pop_back(){
    if(count==0 && arr[0]==0) printf("-1\n");
    else{
        printf("%d\n",arr[count-1]);
        arr[count-1]=0;
        count--;
    }
}


void size(){
    printf("%d\n",count);
}

void empty(){
    if(count==0 && arr[count]==0) printf("1\n");
    else printf("0\n");
}

void front(){
    if(count==0 && arr[count]==0) printf("-1\n");
    else printf("%d\n",arr[0]);
}

void back(){
    if(count==0 && arr[count]==0) printf("-1\n");
    else printf("%d\n",arr[count-1]);
}

int main(void){
    int n;
    scanf("%d",&n);

    char stack[20];
    int put;
    for(int i=0; i<n; i++){
        scanf("%s",stack);
        if(strcmp(stack,"push_front")==0){
            scanf("%d",&put);
            push_front(put);
        }
        if(strcmp(stack,"push_back")==0){
            scanf("%d",&put);
            push_back(put);
        }
        else if(strcmp(stack,"pop_front")==0) pop_front();
        else if(strcmp(stack,"pop_back")==0) pop_back();
        else if(strcmp(stack,"size")==0) size();
        else if(strcmp(stack,"empty")==0) empty();
        else if(strcmp(stack,"front")==0) front();
        else if(strcmp(stack,"back")==0) back();
    }
    
    return 0;
}