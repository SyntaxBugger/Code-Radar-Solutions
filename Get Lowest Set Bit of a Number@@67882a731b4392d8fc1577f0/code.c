#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int cnt=0;
    while(n&1==0){
        n=n<<1;
        cnt++;
        n++;
    }
    printf("%d",cnt);
    return 0;
}