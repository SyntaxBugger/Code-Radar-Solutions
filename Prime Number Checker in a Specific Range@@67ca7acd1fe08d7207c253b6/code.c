#include <stdio.h>
int isPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int flag=0;
int printPrimesInRange(int a, int b){
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            printf("%d ", i);
            flag=1;
        }
    }
    if(flag==0) printf("No prime numbers");
}