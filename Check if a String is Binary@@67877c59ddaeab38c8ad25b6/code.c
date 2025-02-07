#include <stdio.h>
#include <string.h>

int main() {
    char a[69];
    int flag=1;
    fgets(a,sizeof(a),stdin);
    if(a[0]=='\0'){
        printf("Yes");
        return 0;
    }
    for(int i=0; i<strlen(a); i++){
        if(a[i]!='0'&& a[i]!='1'){
           flag=0;
           break;
        }
    }
    (flag==0) ? printf("No"): printf("Yes");
    return 0;
}