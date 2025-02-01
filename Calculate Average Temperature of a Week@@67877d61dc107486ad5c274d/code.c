#include <stdio.h>

struct avgTemp{
    char day[69];
    float temp;
};
int main() {
    int n=7;
    struct avgTemp a1[n];
    float sum=0;
    for(int i=0; i<n; i++){
        scanf("%s %f",a1[i].day,&a1[i].temp);
        sum+=a1[i].temp;
    }
    printf("Average Temperature: %.2f",sum/n);
    return 0;
}