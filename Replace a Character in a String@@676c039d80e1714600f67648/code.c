#include <stdio.h>
#include <string.h>

int main() {
    char str[69];
    char oldC;
    char newC;
    scanf("%s %c %c",str,&oldC,&newC);
    for(int i=0; i<strlen(str); i++){
        if(str[i]==oldC){
            str[i]=newC;
        }
    }
    printf("%s",str);
    return 0;
}