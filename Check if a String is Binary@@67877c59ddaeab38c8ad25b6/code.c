#include <stdio.h>
#include <string.h>

int main() {
    char a[69];
    scanf("%s",a);
    for(int i=0; i<strlen(a); i++){
        if(str[i]=='0'|| str[i]=='1'){
            printf("Yes");
        }else{
            printf("No");
        }
    }
    return 0;
}