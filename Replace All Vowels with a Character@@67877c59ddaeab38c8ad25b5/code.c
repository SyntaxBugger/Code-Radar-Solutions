#include <stdio.h>
#include <string.h>

int main() {
    char str[69];
    char toRep;
    fgets(str,sizeof(str), stdin);
    scanf("%c",&toRep);
    for(int i=0; i<strlen(str); i++){
        char c = str[i];
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' ||c=='O' ||c=='I'||c=='U'){
            str[i]=toRep;
        }
    }
    printf("%s",str);
    return 0;
}