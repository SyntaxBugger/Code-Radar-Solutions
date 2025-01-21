#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d",a);
        }
    }
    if(b>a){
        if(b>c){
            printf("%d",b);
        }
    }
    if(c>a){
        if(c>b){
            printf("%d",c);
        }
    }
    return 0;
}