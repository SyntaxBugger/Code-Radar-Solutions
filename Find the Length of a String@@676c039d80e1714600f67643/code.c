#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    scanf("%s",ch);
    int i;
    while(ch[i]!='\0'){
        i++;
    }
    printf("%d",i);
    return 0;
}