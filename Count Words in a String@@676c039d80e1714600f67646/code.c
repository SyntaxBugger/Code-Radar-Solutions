#include <stdio.h>
#include <string.h>

int main() {
    char str[69];
    int wcnt=0;
    scanf("%s",str);
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='' || str[i]=="\n" || str[i]=="\t"){
            wcnt++;
        }
    }
    printf("%d",wcnt);
    return 0;
}