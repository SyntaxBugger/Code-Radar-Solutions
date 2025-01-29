#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    int cnt=0;
    scanf("%s",ch);
    for(int i=0; i<strlen(ch); i++){
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}