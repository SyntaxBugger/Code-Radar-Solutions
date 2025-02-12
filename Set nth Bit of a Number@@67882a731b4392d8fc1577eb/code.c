#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    c=a|(1>>b);
    printf("%d",c);
}