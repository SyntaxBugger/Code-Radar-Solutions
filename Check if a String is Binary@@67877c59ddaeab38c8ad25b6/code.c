#include <stdio.h>
#include <string.h>

int main() {
    char a[69];
    int flag=0;
    scanf("%s",a);
    for(int i=0; i<strlen(a); i++){
        if(a[i]=='0'|| a[i]=='1'){
           flag=1;
        }
    }
    (flag==1) ? printf("Yes"): printf("No");
    return 0;
}