#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    scanf("%s",ch);
    int cnt=0;
    for(int i=0; i<strlen(ch); i++){
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}