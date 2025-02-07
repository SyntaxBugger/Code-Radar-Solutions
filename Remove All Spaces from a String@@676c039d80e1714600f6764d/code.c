#include <stdio.h>
#include <string.h>

int main() {
    int i,j=0;
    char c[69];
    fgets(c,sizeof(c),stdin);
    for(i=0; i<strlen(c); i++){
        if(!(c[i]==' ')){
            c[j++]=c[i];
        }
    }
    c[j]='\0';
    printf("%s",c);
    return 0;
}