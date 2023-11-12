#include <stdio.h>
#include <string.h>

char a[1000005];
int freq[26];

int main(void){
    int max=0;
    char ans;

    scanf("%s", &a);
    int size=strlen(a);

    for(int i=0; i<size; i++){
        if(a[i]>='a') freq[a[i]-'a']++;
        else freq[a[i]-'A']++;
    }

    for(int j=0; j<26; j++){
        if(freq[j]==max) ans='?';
        else if(freq[j]>max) {
            max=freq[j];
            ans='A'+j;
        }
    }

    printf("%c",ans);
    return 0;
}
