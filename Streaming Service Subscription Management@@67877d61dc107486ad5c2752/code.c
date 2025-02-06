#include <stdio.h>
#include <string.h>
struct subs{
    char name[69];
    char type[69];
    float price;
};

int main() {
    int n;
    float sum1=0, sum2=0, sum3=0;
    int bcnt=0, scnt=0, pcnt=0;
    scanf("%d",&n);
    struct subs m1[n];
    for(int i=0; i<n; i++){
        scanf("%s %s %f",m1[i].name,m1[i].type,&m1[i].price);
    }
    for(int i=0; i<n; i++){
        if(strcmp(m1[i].type, "Basic") == 0){
            sum1+=m1[i].price;
            bcnt++;
        }else if(strcmp(m1[i].type, "Standard") == 0){
            sum2+=m1[i].price;
            scnt++;
        }else{
            sum3+=m1[i].price;
            pcnt++;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f",bcnt,sum1,scnt,sum2,pcnt,sum3);
    return 0;
}