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
