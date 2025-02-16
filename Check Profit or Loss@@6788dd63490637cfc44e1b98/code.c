#include <stdio.h>

int main() {
    int cpr,sellpr;
    scanf("%d %d",&cpr,&sellpr);
    if(cpr<sellpr){
    printf("Profit");
     }else if(cpr>sellpr){
    printf("Loss");
     }else{
    printf("No Profit No Loss");
    }return 0;
}