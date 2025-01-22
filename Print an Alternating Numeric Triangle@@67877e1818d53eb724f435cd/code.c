#include <stdio.h>

int main() {
    int n,sum;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            sum=i+j;
            if(sum%2==0){
                printf("%d",1);
            }else{
                printf("%d",0);
            }
            printf("\n");
        }
    }
    return 0;
}