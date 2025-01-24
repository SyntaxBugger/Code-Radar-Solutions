#include <stdio.h>

int main() {
    int n,k;
    int evencnt=0;
    int oddcnt=0;
    scanf("%d",&n);
    int arr[n];
    for(int i; i<=n; i++){
        scanf("%d",&k);
        arr[i]=k;
    }
    for(int i; i<=n; i++){
        if(arr[i]%2==0){
            evencnt++;
        }else{
            oddcnt++;
        }
    }
    printf("%d %d",&evencnt,&oddcnt);
    return 0;
}