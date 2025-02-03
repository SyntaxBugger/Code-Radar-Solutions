#include <stdio.h>
#include <string.h>

int main() {
    char str[69];
    char toFind;
    int cnt=0;
    fgets(str,sizeof(str),stdin);
    scanf("%c",&toFind);
    for(int i=0; i<strlen(str); i++){
        if(str[i]==toFind){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}