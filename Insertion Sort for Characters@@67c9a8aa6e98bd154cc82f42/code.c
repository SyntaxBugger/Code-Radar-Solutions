#include <stdio.h>
void insertionSort(char arr[],int n){
    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1]<arr[j]){
            int temp=arr[j-1];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
    }
}
int printArray(char arr[], int n){
    for(int i=0; i<n; i++){
        printf("%c ",i);
    }
}