#include <stdio.h>

int primeNum(int arr[], int a){
    int cnt;
    for(int i=1; i<a; i++){
        if(a%i==0){
            cnt++;
        }
    }
    if(cnt<2){
        return cnt;
    }
}
int main() {
    int a, value;
    scanf("%d",&a);
    int arr[a];
    for(int i; i<a; i++){
        scanf("%d",&value);
        arr[i]=value;
    }
    printf(primeNum(arr[a],a));
    return 0;
}