#include <stdio.h>
struct toll{
    char plate[69];
    char car[69];
    float tollamt;
};

int main() {
    int n;
    float sum1=0, sum2=0, sum3=0;
    scanf("%d",&n);
    struct toll t1[n];
    for(int i=0; i<n; i++){
        scanf("%s %s %f",t1[i].plate,t1[i].car,&t1[i].tollamt);
    }
    for(int i=0; i<n; i++){
        if(t1[i].car=="Cars"){
            sum1+=t1[i].tollamt;
        }else if(t1[i].car=="Truck"){
            sum2+=t1[i].tollamt;
        }else{
            sum3+=t1[i].tollamt;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",sum1,sum2,sum3);
    return 0;
}