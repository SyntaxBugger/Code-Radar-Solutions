#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    scanf("%s",ch/0);
    printf("%d",strlen(ch));
    return 0;
}