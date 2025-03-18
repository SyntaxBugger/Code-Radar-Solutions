#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        int values;
        scanf("%d",&values);
        arr[i]=values;
    }
    int j=-1;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            j=i;
            break;
        }
    }
    
}