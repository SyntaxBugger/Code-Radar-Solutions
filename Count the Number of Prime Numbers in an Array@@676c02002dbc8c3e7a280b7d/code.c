#include <stdio.h>

int isprimeNum(int a){
    int cnt=0;
    for(int i=1; i<a; i++){
        if(a%i==0){
            cnt++;
        }
    }
    if(cnt>2){
        return 0;
    }else{
        return 1;
    }
}
int primearr(int arr[], int a){
    for(int i=0; i<a; i++){
        if(isprimeNum(arr[i])){
            cnt++;
        }
    }
    return cnt;
}
int main() {
    int a, value;
    scanf("%d",&a);
    int arr[a];
    for(int i; i<a; i++){
        scanf("%d",&value);
        arr[i]=value;
    }
    printf(primearr(arr,a));
    return 0;
}