#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(a in "ABCDEFGHIJKLMNOPQRSTUVEXYZ"){
        printf("Uppercase");
    }else if(a in "abcdefghijklmnopqrstuvwxyz"){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}