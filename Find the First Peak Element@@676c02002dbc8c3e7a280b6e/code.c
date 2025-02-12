#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        int k;
        scanf("%d",&k);
        arr[i]=k;
    }
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf(arr[i]);
            break;
        }
    }
    return 0;
}