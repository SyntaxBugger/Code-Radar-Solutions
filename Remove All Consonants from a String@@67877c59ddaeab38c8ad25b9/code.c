#include <stdio.h>
#include <string.h>

int main() {
    int i,j=0;
    char str[69];
    fgets(str,sizeof(str), stdin);
    for(int i=0; i<strlen(str); i++){
        char c = str[i];
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' ||c=='O' ||c=='I'||c=='U'){
            str[j++]=str[i];
        }
        str[j]='\0';
    }
    printf("%s",str);
    return 0;
}