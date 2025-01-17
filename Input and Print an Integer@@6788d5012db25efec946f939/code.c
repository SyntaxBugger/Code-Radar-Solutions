#include <stdio.h>

char* welcome() {
    int a;
    scanf("%d",a);
    return a;
}

int main() {
    printf("You entered: %d\n", welcome());
    return 0;
}