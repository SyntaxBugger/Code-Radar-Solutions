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
    if(arr[0]>arr[1]){
        printf("%d",arr[0]);
    }
    int flag=0;
    for(int i=1; i<n-1; i++){
        if( arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%d",-1);
    }
    if(arr[n-1]>arr[n-2]){
        printf("%d",arr[n-1]);
    }
    return 0;
}