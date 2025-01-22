#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==0 || j==0 || i==1 || j==1 ){
                printf("* ");
            }else{
                printf("  \n");
            }
        }
        printf("\n");
    }
    return 0;
}