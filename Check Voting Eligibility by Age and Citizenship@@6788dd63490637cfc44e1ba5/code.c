#include <stdio.h>

int main() {
    int age,e;
    scanf("%d %d",&age,&e);
    if(age>=18 && e==1){
        printf("Eligible");
    }else if(age<18 || e==0){
        printf("Not Eligible");
    }
    return 0;
}