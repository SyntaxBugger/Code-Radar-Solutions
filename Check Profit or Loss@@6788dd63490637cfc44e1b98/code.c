#include <stdio.h>

int main() {
    int cpr,sellpr;
    scanf("%d %d",&cpr,&sellpr);
    diff=sellpr-cpr;
    if(diff>0){
        printf("Profit");
    }else if(diff<0){
        printf("Loss");
    }else{
        printf("No Profit No Loss");
    }
    return 0;
}