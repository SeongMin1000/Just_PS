#include <stdio.h>

typedef struct member
{
    int age;
    char name[101];
}mem;
mem person[100001];

int main(void){
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d %s", &person[i].age, person[i].name);
    }

    for(int i=1; i<201; i++){
        for(int j=0; j<n; j++){
            if(i==person[j].age) 
            printf("%d %s\n",person[j].age, person[j].name);
        }
    }
    return 0;
}