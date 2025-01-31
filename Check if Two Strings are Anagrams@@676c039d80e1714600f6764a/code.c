#include <stdio.h>
#include <string.h>

int main() {  
    char a[89], b[78];
    scanf("%s %s",a,b);
    for(int i=1; i<=strlen(a); i++){
        if(i in b && strlen(b)==strlen(a)){
            printf("Yes");
        }else{
            printf("No");
        }
    }
    return 0;
}