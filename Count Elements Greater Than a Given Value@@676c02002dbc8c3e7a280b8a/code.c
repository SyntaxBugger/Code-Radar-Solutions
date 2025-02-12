#include <stdio.h>
int main(){
    int n,k; 
    int cnt=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0; i<n; i++){
        int value;
        scanf("%d",&value);
        arr[i]=value;
    }
    for(int i=0; i<n; i++){
        if(arr[i]>){
            cnt++;
        }
    }
    printf("%d",cnt);
}