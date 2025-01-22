#include <stdio.h>

int main() {
    int n;
    int number=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",number);
            number=number+1;
        }
        printf("\n");
    }
    return 0;
}