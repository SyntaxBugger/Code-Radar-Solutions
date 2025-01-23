#include <stdio.h>

int main() {
    int n;
    char ch;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        ch='A';
        for(int j=1; j<=i; j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}