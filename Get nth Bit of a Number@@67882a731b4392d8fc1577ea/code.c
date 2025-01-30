#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(1&(1<<a)){
        printf("%d",1);
    }else{
        printf("%d",0);
    }
    return 0;
}