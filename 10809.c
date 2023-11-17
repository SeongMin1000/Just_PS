#include <stdio.h>

int main(void){
    char s[100]={0};
    int ans[26];

    scanf("%s", &s);

    for(int i=0; i<26; i++) ans[i]=-1;

    for(int j=0; j<26; j++){
            for(int i=0; s[i]!=0; i++){
                if(s[i]==(j+97)){
                    ans[s[i]-'a']=i;
                    break;
                }
            }
        }

    for(int j=0; j<26; j++){
        printf("%d ", ans[j]);
    }

	return 0;
}