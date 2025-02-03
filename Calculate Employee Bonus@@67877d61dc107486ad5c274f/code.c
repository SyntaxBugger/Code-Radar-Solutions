#include <stdio.h>

struct bonus{
    int id;
    char name[69];
    float sal;
    float bonus;
};
int main() {
    int n;
    scanf("%d",&n);
    struct bonus b1[n];
    for(int i=0; i<n; i++){
        scanf("%d %s %f",&b1[i].id,b1[i].name,&b1[i].sal);
    }
    for(int i=0; i<n; i++){
        if(b1[i].sal<50000){
            b1[i].bonus=(10/100)*b1[i].sal;
        }else{
            b1[i].bonus=(5/100)*b1[i].sal;
        }
    }
    for(int i=0; i<n; i++){
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",b1[i].id,b1[i].name,b1[i].bonus);
    }
    return 0;
}