#include <stdio.h>
int main(){
    int n,k; 
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0; i<n; i++){
        int value;
        scanf("%d",&value);
        arr[i]=value;
    }
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            printf("%d",i);
            break;
        }
    }
    return 0;
}