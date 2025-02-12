#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        int k;
        scanf("%d",&k);
        arr[i]=k;
    }
    for(int i=0; i<n; i++){
       int digit = arr[i]%10;
       sum+=digit+digit*10;
       digit=arr[i]/10;
       printf("%d ",sum);
    }
    return 0;
}