#include <stdio.h>
int selectionSort(int arr[],int n){
    for(int i=0 ; i<n-2; i++){
        int min=i;
        for(int j=i; j<n-1; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=arr[min];
    }
}
int printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}