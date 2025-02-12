#include <stdio.h>
#include <string.h>
int main() {
    char a[100],b[20];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    str[strcspn(str, "\n")] = '\0';
    strcat(a,b);
    printf("%s",a);
    return 0;
}