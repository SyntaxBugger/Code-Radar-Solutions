#include <stdio.h>

int main() {
    int n,k;
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&k);
        arr[i]=k;
    }
    if(n%2!=0){
        printf("%d",arr[(n+1)/2]);
    }else{
        printf("%d",arr[n/2]+ arr[(n/2)+1]/2);
    }
    return 0;
}