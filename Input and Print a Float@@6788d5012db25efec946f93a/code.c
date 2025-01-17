#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
    float a;
    scanf("%f",&a);
    printf("%.2f",a);
}

int main() {
    printf("%s", welcome());
    return 0;
}