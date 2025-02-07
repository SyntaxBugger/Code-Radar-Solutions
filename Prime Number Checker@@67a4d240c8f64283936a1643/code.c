#include <stdio.h>

int isPrime( int num){
    int cnt=0;
    if(num<=1){
        return 0;
    }else{
        for(int i=1; i<=num; i++){
            if(num%i==0){
                cnt++;
            }
    }
    if(cnt>2){
        return 0;
    }else{
        return 1;
    }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    while(n--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}