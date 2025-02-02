#include <stdio.h>

int main() {
    char a[100],b[];
    scanf("%s %s",a,b);
    strcat(a,b);
    printf("%s",a);
    return 0;
}