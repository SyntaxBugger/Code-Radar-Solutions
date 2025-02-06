#include <stdio.h>
#include <string.h>
struct movieTicket{
    char movie[69];
    char type[69];
    float price;
};

int main() {
    int n;
    float sum1=0, sum2=0, sum3=0;
    scanf("%d",&n);
    struct movieTicket m1[n];
    for(int i=0; i<n; i++){
        scanf("%s %s %f",m1[i].movie,m1[i].type,&m1[i].price);
    }
    for(int i=0; i<n; i++){
        if(strcmp(m1[i].type, "Standard") == 0){
            sum1+=m1[i].price;
        }else if(strcmp(m1[i].type, "Premium") == 0){
            sum2+=m1[i].price;
        }else{
            sum3+=m1[i].price;
        }
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",sum1,sum2,sum3);
    return 0;
}