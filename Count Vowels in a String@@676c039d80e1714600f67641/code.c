#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int cnt=0;
    scanf("%s",str);
    for(int i=0; i<strlen(str); i++){
        char c= tolower(str[i]);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            cnt++;
       }
    }
    printf("%d",cnt);
    return 0;
}