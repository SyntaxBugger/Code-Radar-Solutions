#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int cnt=0;
    for(int i=31; i>=0; i--){
        if(a>>i & 1){
            break;
        }
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}