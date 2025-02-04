#include <stdio.h>
#include <string.h>

int main() {
    char str[69];
    char toRep;
    fgets(str,sizeof(str), stdin);
    scanf("%c",&toRep);
    for(int i=0; i<strlen(str); i++){
        char c = str[i];
        if(c=='a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' ||'O' ||'I'||'U'){
            str[i]=toRep;
        }
    }
    printf("%s",str);
    return 0;
}