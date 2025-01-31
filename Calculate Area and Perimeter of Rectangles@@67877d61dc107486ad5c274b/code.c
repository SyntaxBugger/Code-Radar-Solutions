#include <stdio.h>

struct area{
    float length;
    float breath;
};
int main() {
    int n;
    scanf("%d",&n);
    struct area a1[n];
    for(int i=0; i<n; i++){
        scanf("%f %f",&a1[i].length,&a1[i].breath);
    }
    for(int i=0; i<n; i++){
        printf("Rectange %d: Area = %.2f, Perimeter = %.2f\n",i+1,a1[i].length*a1[i].breath,2*(a1[i].length+a1[i].breath));
    }
    return 0;
}