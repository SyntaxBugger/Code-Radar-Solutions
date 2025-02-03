#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    int cnt=0;
    for(int i=0; i<strlen(ch); i++){
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}