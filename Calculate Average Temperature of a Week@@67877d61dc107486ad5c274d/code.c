#include <stdio.h>

struct avgTemp{
    char day[69];
    float temp;
};
int main() {
    struct avgTemp a1[7];
    int sum=0;
    for(int i=0; i<7; i++){
        scanf("%s %f",a1[i].day,&a1[i].temp);
        sum+=a1[i].temp;
    }
    printf("Average Temperature: %.2f",sum/7);
    return 0;
}