#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf(a);
        }
    }
    if(b>a){
        if(b>c){
            printf(b);
        }
    }
    if(c>a){
        if(c>b){
            printf(c);
        }
    }
    return 0;
}