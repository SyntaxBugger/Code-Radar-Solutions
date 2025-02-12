#include <stdio.h>
int main(){
    int n,k; 
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        int value;
        scanf("%d",&value);
        arr[i]=value;
    }
    scanf("%d",&k);
    int found=0;
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            found=1;
            printf("%d",i);
            break;
        }
    }
    if(found==0){
        printf("-1");
    }
    return 0;
}