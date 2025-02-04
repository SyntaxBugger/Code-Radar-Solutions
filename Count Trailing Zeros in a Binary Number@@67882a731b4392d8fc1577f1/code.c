#include <stdio.h>

int main() {
    int a;
    int cnt=0;
    scanf("%d",&a);
    while((a&1)==0 && a!=0){
        cnt++;
        a=a>>1;
    }
    printf("%d",cnt);
    return 0;
}