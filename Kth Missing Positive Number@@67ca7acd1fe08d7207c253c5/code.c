#include <stdio.h>
int findKthMissing(int arr[],int n, int k){
    int sum1=0,sum2=0;
    for(int i=1; i<=n; i++){
        sum1+=i;
    }
    for(int i=0; i<n; i++){
        sum2+=arr[i];
    }
    return sum1-sum2;
}