#include <stdio.h>
void bubbleSort(char arr[], int n){
    for(int i=n-1; i>=1; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int printArray(char arr[], int n){
    for(int i=0; i<n; i++){
        printf("%c ", arr[i]);
    }
}