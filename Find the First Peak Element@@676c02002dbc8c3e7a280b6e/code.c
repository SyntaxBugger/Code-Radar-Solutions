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
    int flag=0;
    for(int i=1; i<n-1; i++){
        if( arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            flag=1;
            break;
        }
    }
    if(flag==1) ? printf("%d",arr[i]) : printf("%d",-1) ;
    return 0;
}