#include <stdio.h>
#include <string.h>

int main() {
    char a[69];
    int flag=1;
    scanf("%s",a);
    for(int i=0; i<strlen(a); i++){
        if(a[i]!='0'&& a[i]!='1'){
           flag=0;
        }
        if(a[i]=='\0'){
            flag=1;
        }
    }
    (flag==0) ? printf("No"): printf("Yes");
    return 0;
}