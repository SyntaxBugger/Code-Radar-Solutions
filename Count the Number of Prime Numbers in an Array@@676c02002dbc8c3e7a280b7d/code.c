#include <stdio.h>

bool primeNum(int n;){
    int cnt;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cnt++
        }
    }
    if(cnt>2){
        return true;
    }else{
        return false;
    }
}
int main() {
    int a;
    scanf("%d",&a);
    
    return 0;
}